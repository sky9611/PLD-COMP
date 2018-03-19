rm antlr4visitor/cmmBaseVisitor.cpp
rm antlr4visitor/cmmBaseVisitor.h
rm antlr4visitor/cmm.interp 
rm antlr4visitor/cmmLexer.cpp
rm antlr4visitor/cmmLexer.h
rm antlr4visitor/cmmLexer.interp
rm antlr4visitor/cmmLexer.tokens
rm antlr4visitor/cmmParser.cpp
rm antlr4visitor/cmmParser.h
rm antlr4visitor/cmm.tokens
rm antlr4visitor/cmmVisitor.cpp
rm antlr4visitor/cmmVisitor.h
java -jar /opt/antlr-4.7.1-complete.jar -Dlanguage=Cpp cmm.g4 -no-listener -visitor
mv cmmBaseVisitor.cpp antlr4visitor/cmmBaseVisitor.cpp
mv cmmBaseVisitor.h antlr4visitor/cmmBaseVisitor.h
mv cmm.interp antlr4visitor/cmm.interp 
mv cmmLexer.cpp antlr4visitor/cmmLexer.cpp
mv cmmLexer.h antlr4visitor/cmmLexer.h
mv cmmLexer.interp antlr4visitor/cmmLexer.interp
mv cmmLexer.tokens antlr4visitor/cmmLexer.tokens
mv cmmParser.cpp antlr4visitor/cmmParser.cpp
mv cmmParser.h antlr4visitor/cmmParser.h
mv cmm.tokens antlr4visitor/cmm.tokens
mv cmmVisitor.cpp antlr4visitor/cmmVisitor.cpp
mv cmmVisitor.h antlr4visitor/cmmVisitor.h
echo "Finish... Enter for add"
read a
git add .
echo "Finish... Enter for commit"
read a
git commit -m "generate antlr fils"
echo "Finish... Enter for push"
read a
git push
