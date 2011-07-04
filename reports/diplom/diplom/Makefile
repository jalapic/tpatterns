Project: ott

ott: diplom.ps
	gs -sDEVICE=pdfwrite -sOutputFile=diplom.pdf -dBATCH -dNOPAUSE diplom.ps
diplom.ps: diplom.dvi
	dvips diplom.dvi
diplom.dvi: diplom.tex
	latex diplom.tex

