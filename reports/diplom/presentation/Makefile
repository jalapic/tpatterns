Project: ott

ott: diplomP.ps
	gs -sDEVICE=pdfwrite -sOutputFile=diplomP.pdf -dBATCH -dNOPAUSE diplomP.ps
diplomP.ps: diplomP.dvi
	dvips diplomP.dvi
diplomP.dvi: diplomP.tex
	latex diplomP.tex
