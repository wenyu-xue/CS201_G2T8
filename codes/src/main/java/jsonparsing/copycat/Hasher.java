package jsonparsing.copycat;

import jsonparsing.entity.AbstractSyntaxTree;

public class Hasher {
    public Long hash(AbstractSyntaxTree root){
        // recursively traverse the tree


        /**
         * varying sensitivity level / define similarity threshold
         * in order of importance:
         * FunctionDefinition (Self-defined Method)
         * IterationStatement (Logic calls like do/while/for)
         * Expression/ArithmeticExpression/PostfixExpression (Method calls like printf)/ ArgumentExpressionList
         * ParameterList/ParameterDeclaration/DeclarationSpecifier/TypeSpecifier (Argument)
         * DeclarationSpecifier/TypeSpecifier
         * ----------
         * Declarator/DirectDeclarator
         * TranslationUnit
         * Identifier
         */

        /*
         * at each node, simple/cheap hash:
         *  - type
         *  - content
         *  - children number
         *
         * at each node, complex/expensive hash:
         *  - level
         *  - children
         *  - hash of all the children
         *  -
         */
        //
        double score = 0.0;

        return score;

    }


}
