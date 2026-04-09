// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FindMaxVolumePoint
// Entry Point: 00eae8f0
// Size: 272 bytes
// Signature: undefined __thiscall FindMaxVolumePoint(ICHull * this, double param_1)


/* VHACD::ICHull::FindMaxVolumePoint(double) */

byte __thiscall VHACD::ICHull::FindMaxVolumePoint(ICHull *this,double param_1)

{
  undefined8 *puVar1;
  long lVar2;
  double dVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = 0.0;
  lVar8 = *(long *)(*(long *)(this + 8) + 0x40);
  if (*(char *)(*(long *)(this + 8) + 0x31) == '\0') {
    puVar7 = (undefined8 *)0x0;
    do {
      uVar5 = ComputePointVolume(this,&local_50,false);
      if ((uVar5 & 1) == 0) {
        puVar6 = *(undefined8 **)(this + 8);
      }
      else {
        puVar6 = *(undefined8 **)(this + 8);
        puVar1 = puVar6;
        dVar3 = local_50;
        if (local_50 <= param_1) {
          puVar1 = puVar7;
          dVar3 = param_1;
        }
        param_1 = dVar3;
        puVar7 = puVar1;
        if (*(long *)(this + 0x10) != 0) {
          puVar6 = (undefined8 *)puVar6[7];
          *(undefined8 **)(this + 8) = puVar6;
        }
      }
    } while (*(char *)((long)puVar6 + 0x31) == '\0');
    bVar4 = puVar7 == (undefined8 *)0x0;
    puVar6 = *(undefined8 **)(lVar8 + 0x38);
    *(undefined8 **)(this + 8) = puVar6;
    if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
      uVar10 = puVar6[1];
      uVar9 = *puVar6;
      uVar11 = puVar6[2];
      *puVar6 = *puVar7;
      puVar6[1] = puVar7[1];
      puVar6[2] = puVar7[2];
      puVar7[1] = uVar10;
      *puVar7 = uVar9;
      puVar7[2] = uVar11;
    }
  }
  else {
    bVar4 = true;
    *(undefined8 *)(this + 8) = *(undefined8 *)(lVar8 + 0x38);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4 ^ 1;
}


