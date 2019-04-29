namespace cuts {
	// EVENT SELECTION
	const Float_t EV_SPH_JETTY 	= 0.462;
	const Float_t EV_SPH_ISO 	= 0.755;

	// V0 SELECTION
	const Float_t V0_ETA[2] 	= {-0.8, 0.8};
	const Float_t V0_PT[2] 		= {0.1, 14.};
	const Float_t V0_DCADD		= 0.5;
	const Float_t V0_CPA		= 0.997;
	const Float_t V0_R[2]		= {0.05, 100.};

	// V0 DAUGHTER SELECTION
	const Float_t V0_D_ETA[2]	= {-0.8, 0.8};
	const Float_t V0_D_DCAPVXY 	= 0.06;

	// K0s, L, Lbar
	const Float_t K0S_AP 				= 0.2;
	const Float_t K0S_D_NSIGTPC[2] 		= {-3., 3.};
	const Float_t K0S_D_ETA[2]			= {-0.8, 0.8};
	const Float_t K0S_D_DCAPVXY			= 0.06;
	//const Float_t K0S_NSIGTOF[2] 		= {-3., 3.};
	const Float_t L_NSIGTPC[2] 			= {-3., 3.};
	//const Float_t L_NSIGTOF[2] 		= {-3., 3.}; 
	const Float_t LBAR_NSIGTPC[2] 		= {-3., 3.};
	//const Float_t LBAR_NSIGTOF[2] 	= {-3., 3.};
	const Float_t L_PT[2] 		= {0.3, 14.};

	// PRIMARY TRACK SELECTION
	const Float_t TR_PRIMARY_PAR[3]		= {0.0182, 0.0350, 1.01}; 
}