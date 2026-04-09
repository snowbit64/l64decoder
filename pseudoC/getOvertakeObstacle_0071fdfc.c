// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOvertakeObstacle
// Entry Point: 0071fdfc
// Size: 216 bytes
// Signature: undefined __thiscall getOvertakeObstacle(TrafficVehicle * this, bool * param_1, float * param_2)


/* TrafficVehicle::getOvertakeObstacle(bool&, float&) */

void __thiscall
TrafficVehicle::getOvertakeObstacle(TrafficVehicle *this,bool *param_1,float *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  
  lVar5 = *(long *)(this + 0x28);
  *param_1 = false;
  cVar2 = *(char *)(lVar5 + 0xec);
  *param_2 = -1.0;
  if (cVar2 == '\0') {
    return;
  }
  if (*(char *)(lVar5 + 0xee) == '\0') {
    plVar4 = (long *)(*(long *)(this + 0x48) + 0x70);
    plVar7 = (long *)*plVar4;
    if (plVar7 != (long *)0x0) {
      uVar1 = *(uint *)(lVar5 + 0x114);
      plVar6 = plVar4;
      do {
        if (*(uint *)(plVar7 + 4) >= uVar1) {
          plVar6 = plVar7;
        }
        plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < uVar1];
      } while (plVar7 != (long *)0x0);
      if ((plVar6 != plVar4) && (*(uint *)(plVar6 + 4) <= uVar1)) {
        lVar5 = plVar6[5];
        *param_2 = *(float *)(lVar5 + 0x220);
        uVar8 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x178),*(undefined4 *)(this + 0x178),
                           *(float *)(lVar5 + 0x17c) * *(float *)(this + 0x17c));
        fVar9 = (float)NEON_fmadd(*(undefined4 *)(lVar5 + 0x180),*(undefined4 *)(this + 0x180),uVar8
                                 );
        if (0.0 < fVar9) {
          if (*(float *)(this + 0x224) <= *(float *)(lVar5 + 0x224)) {
            bVar3 = false;
          }
          else {
            bVar3 = *(char *)(lVar5 + 0x234) == '\0';
          }
          goto LAB_0071fec4;
        }
      }
    }
    if (*(int *)(this + 0x378) != 2) {
      return;
    }
  }
  bVar3 = true;
LAB_0071fec4:
  *param_1 = bVar3;
  return;
}


