// Generated from ifcc.g4 by ANTLR 4.7.2

#include "visitor.h"

Visitor::Visitor()
{
    addressIterator = 1;
}

antlrcpp::Any Visitor::visitAxiom(ifccParser::AxiomContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitProg(ifccParser::ProgContext *ctx)
{

    cout << ".text \n" //"# declaration of ’text’ section (which means ’program’)" // entry point to the ELF linker or loader.
            ".global main \n"
            "main: \n"
            "  # prologue\n"
            "  pushq %rbp\n"      //save %rbp on the stack
            "  movq %rsp, %rbp\n" //define %rbp for the current function

            "\n  # body \n";

    visitChildren(ctx);

    cout << "\n  # epilogue\n"
            "  popq %rbp\n" //restore %rbp from the stack
            "  ret\n";      //return to the caller (here the shell)

    return 0;
}

antlrcpp::Any Visitor::visitDec(ifccParser::DecContext *ctx)
{
    string variableName = ctx->VAR()->getText();
    if (blocPrincipal.variableExiste(variableName))
    {
        // if the variable name already exist, we throw an error.
    }
    int memoryAddress = addressIterator++;
    Variable* variable = new Variable(variableName, "int", memoryAddress);
    blocPrincipal.AjouterVariable(*variable);
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffDecConst(ifccParser::AffDecConstContext *ctx)
{
    int retval = stoi(ctx->CONST()->getText());
    string variableName = ctx->VAR()->getText();
    if (blocPrincipal.variableExiste(variableName))
    {
        // if the variable name already exist, we throw an error.
    }
    int memoryAddress = addressIterator++;
    cout << " movl $" << retval << ", -" << memoryAddress << "(%rbp)" << endl;
    Variable* variable = new Variable(variableName, "int", memoryAddress);
    blocPrincipal.AjouterVariable(*variable);
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffDecVar(ifccParser::AffDecVarContext *ctx)
{
    string newVariableName = ctx->VAR()[0]->getText();
    if (blocPrincipal.variableExiste(newVariableName))    {
        // if the variable name already exist, we throw an error.
    }
    string existingVariableName = ctx->VAR()[1]->getText();
    if (!blocPrincipal.variableExiste(existingVariableName))    {
        // if the variable name does not exist, we throw an error.
    }
    int memoryAddress = addressIterator++;
    cout << " movl -" << blocPrincipal.getVariable(existingVariableName)->getAddress() << "(%rbp), -" << memoryAddress << "(%rbp)" << endl;
    Variable* variable = new Variable(newVariableName, "int", memoryAddress);
    blocPrincipal.AjouterVariable(*variable);
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffVar(ifccParser::AffVarContext *ctx)
{

    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffConst(ifccParser::AffConstContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitRetVar(ifccParser::RetVarContext *ctx)
{
    string variable = ctx->VAR()->getText();
    cout << "  movl -" << blocPrincipal.getVariable(variable)->getAddress() << "(%rbp), %eax" << endl;
    return 0;
}

antlrcpp::Any Visitor::visitRetConst(ifccParser::RetConstContext *ctx)
{
    int retval = stoi(ctx->CONST()->getText());
    cout << "  movl $" << retval << ", %eax" << endl;
    return 0;
}
