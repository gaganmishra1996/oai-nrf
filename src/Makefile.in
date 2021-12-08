pre-req:
	DEBIAN_FRONTEND=noninteractive
	apt-get update
	DEBIAN_FRONTEND=noninteractive apt-get upgrade --yes
	DEBIAN_FRONTEND=noninteractive apt-get install --yes \
					psmisc \
					git
	

build: pre-req
	git config --global http.proxy ""
	git config --global https.postBuffer 123289600
	git config --global http.sslverify false
	build/scripts/build_nrf --install-deps --force
	build/scripts/build_nrf --clean --Verbose --build-type Release --jobs

