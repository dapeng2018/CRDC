
//#define CONSENSUS_CONFIG

#ifdef CONSENSUS_CONFIG
	#define CONSENSUS_CEDT
	#define CONSENSUS_CRDC
	#define CONSENSUS_ECOR
	#define CONSENSUS_CDOC
	#define CONSENSUS_ENET
	//#define CONSENSUS_OTHER
	//#define CONSENSUS_CRDC

#else
	//#undef CONSENSUS_CEDT
	//#undef CONSENSUS_CRDC

#endif

//#define CONSENSUS_CDOC
#define CONSENSUS_CRDC
//#define CONSENSUS_ECOR
//#define CONSENSUS_CEDT
//#define CONSENSUS_ENET

//#define ECOR_DATA_CHECKING

