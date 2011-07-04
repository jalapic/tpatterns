LATEX=latex
PDFLATEX=pdflatex
DATE=$(shell date +%Y-%m-%d)

coursework = test
PARTS = part1.tex 

$(coursework).pdf:$(coursework).tex $(PARTS)
	$(PDFLATEX) $(coursework).tex

$(coursework).ps:$(coursework).tex
	$(LATEX) $(coursework).tex

pdf: $(coursework).pdf

ps: $(coursework).ps

defalult: pdf
