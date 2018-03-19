rm cmmBaseVisitor.cpp
rm cmmBaseVisitor.h
rm cmm.interp 
rm cmmLexer.cpp
rm cmmLexer.h
rm cmmLexer.interp
rm cmmLexer.tokens
rm cmmParser.cpp
rm cmmParser.h
rm cmm.tokens
rm cmmVisitor.cpp
rm cmmVisitor.h
java -jar /opt/antlr-4.7.1-complete.jar -Dlanguage=Cpp cmm.g4 -no-listener -visitor
echo "Finish... Enter for add"
read a
git add .
echo "Finish... Enter for commit"
read a
git commit -m "generate antlr fils"
echo "Finish... Enter for push"
read a
git push
