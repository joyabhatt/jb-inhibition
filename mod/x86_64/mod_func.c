#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;

extern void _GABAa_reg(void);
extern void _Nca_reg(void);
extern void _cadad_reg(void);
extern void _hsyn_reg(void);
extern void _kca_reg(void);
extern void _kdrbwb_reg(void);
extern void _km_reg(void);
extern void _kv_reg(void);
extern void _nafbwb_reg(void);
extern void _naz_reg(void);
extern void _nsloc_reg(void);
extern void _stdp_reg(void);

void modl_reg(){
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");

    fprintf(stderr," GABAa.mod");
    fprintf(stderr," Nca.mod");
    fprintf(stderr," cadad.mod");
    fprintf(stderr," hsyn.mod");
    fprintf(stderr," kca.mod");
    fprintf(stderr," kdrbwb.mod");
    fprintf(stderr," km.mod");
    fprintf(stderr," kv.mod");
    fprintf(stderr," nafbwb.mod");
    fprintf(stderr," naz.mod");
    fprintf(stderr," nsloc.mod");
    fprintf(stderr," stdp.mod");
    fprintf(stderr, "\n");
  }
  _GABAa_reg();
  _Nca_reg();
  _cadad_reg();
  _hsyn_reg();
  _kca_reg();
  _kdrbwb_reg();
  _km_reg();
  _kv_reg();
  _nafbwb_reg();
  _naz_reg();
  _nsloc_reg();
  _stdp_reg();
}
