// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startParticleSystem
// Entry Point: 009049fc
// Size: 16 bytes
// Signature: undefined __cdecl startParticleSystem(void * param_1, char * param_2, char * * param_3)


/* I3DDynamicsPoolFactory::startParticleSystem(void*, char const*, char const**) */

void I3DDynamicsPoolFactory::startParticleSystem(void *param_1,char *param_2,char **param_3)

{
  loadParticleSystem(*(ParticleSystemDesc **)((long)param_1 + 0x290),param_1,(char *)param_3,param_3
                    );
  return;
}


