#!/bin/bash 

#for i in figs/*.eps; do epstopdf "$i"; done
 
latex graph-latex.tex

latex graph-latex.tex

dvipdf graph-latex.dvi

dvipdf graph-latex.dvi

rm *.aux *.log *.dvi

# 
echo "" 
echo " See graph-latex.pdf" 
echo "" 
