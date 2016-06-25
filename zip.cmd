"C:\Program Files\7-Zip\7z.exe" a -t7z -r -x@zip_excl.lst BitWise.src.7z @zip_incl.lst -mx9
cd Release
"C:\Program Files\7-Zip\7z.exe" a -t7z BitWise.7z BitWise.exe -mx9
copy BitWise.7z ..
del BitWise.7z
cd ..
