if($(Test-Path -Path "./build/main.exe" -PathType Leaf) -eq $true){
	    ./build/main.exe
	}else{
	 	echo "`n`n...main.exe does not exist`n"
}


