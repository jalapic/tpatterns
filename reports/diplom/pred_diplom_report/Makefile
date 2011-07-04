Project: ott

ott: report.ps
	gs -sDEVICE=pdfwrite -sOutputFile=report.pdf -dBATCH -dNOPAUSE report.ps
report.ps: report.dvi
	dvips report.dvi
report.dvi: report.tex
	latex report.tex

