// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endDebugLogging
// Entry Point: 00735d3c
// Size: 288 bytes
// Signature: undefined __thiscall endDebugLogging(VehicleNavigationAgentEntity * this, char * param_1)


/* VehicleNavigationAgentEntity::endDebugLogging(char const*) */

bool __thiscall
VehicleNavigationAgentEntity::endDebugLogging(VehicleNavigationAgentEntity *this,char *param_1)

{
  FILE *__s;
  undefined8 in_x7;
  ulong uVar1;
  float *pfVar2;
  ulong uVar4;
  long lVar3;
  
  this[0x120] = (VehicleNavigationAgentEntity)0x0;
  __s = fopen(param_1,"w");
  if (__s != (FILE *)0x0) {
    fwrite("#    cost      curv     dist     max_spd   spd       dt      x          z           dirx    dirz    actTp pastR presR futuR\n"
           ,0x7c,1,__s);
    lVar3 = *(long *)(this + 0x128);
    if (*(long *)(this + 0x130) != lVar3) {
      uVar1 = 0;
      do {
        pfVar2 = (float *)(lVar3 + uVar1 * 0x30);
        uVar1 = (ulong)((int)uVar1 + 1);
        fprintf(__s,
                "%4u %9.4f %9.4f %8.5f %9.5f %9.5f %7.3f %10.4f %10.4f %7.4f %7.4f %5u %5u %5u %5u\n"
                ,(double)*pfVar2,(double)pfVar2[1],(double)pfVar2[2],(double)pfVar2[3],
                (double)pfVar2[4],(double)pfVar2[5],(double)pfVar2[6],(double)pfVar2[7],uVar1,
                (ulong)*(ushort *)(pfVar2 + 10),(ulong)*(ushort *)((long)pfVar2 + 0x2a),
                (ulong)*(ushort *)(pfVar2 + 0xb),(ulong)*(ushort *)((long)pfVar2 + 0x2e),in_x7,
                (double)pfVar2[8],(double)pfVar2[9]);
        lVar3 = *(long *)(this + 0x128);
        uVar4 = (*(long *)(this + 0x130) - lVar3 >> 4) * -0x5555555555555555;
      } while (uVar1 <= uVar4 && uVar4 - uVar1 != 0);
    }
    fclose(__s);
  }
  return __s != (FILE *)0x0;
}


