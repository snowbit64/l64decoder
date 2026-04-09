// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeCenter
// Entry Point: 00eb05e0
// Size: 400 bytes
// Signature: undefined ComputeCenter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::Mesh::ComputeCenter() */

double * VHACD::Mesh::ComputeCenter(void)

{
  double *pdVar1;
  long lVar2;
  double *in_x0;
  long lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double local_50;
  double dStack_48;
  double local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  dVar5 = in_x0[0xc1];
  if (dVar5 != 0.0) {
    pdVar4 = in_x0;
    if (in_x0[0xc2] != 3.162020133383978e-322) {
      pdVar4 = (double *)in_x0[0xc0];
    }
    pdVar1 = in_x0 + 0xc3;
    if (in_x0[0x125] != 3.162020133383978e-322) {
      pdVar1 = (double *)in_x0[0x123];
    }
    FLOAT_MATH::fm_computeCentroid
              (SUB84(dVar5,0),pdVar4,*(uint *)(in_x0 + 0x124),(uint *)pdVar1,&local_50);
    pdVar4 = in_x0;
    if (in_x0[0xc2] != 3.162020133383978e-322) {
      pdVar4 = (double *)in_x0[0xc0];
    }
    lVar3 = (long)dVar5 + -1;
    in_x0[0x12d] = dStack_48;
    in_x0[300] = local_50;
    in_x0[0x12e] = local_40;
    dVar6 = *pdVar4;
    in_x0[0x126] = dVar6;
    dVar7 = pdVar4[1];
    in_x0[0x127] = dVar7;
    dVar8 = pdVar4[2];
    in_x0[0x128] = dVar8;
    dVar9 = *pdVar4;
    in_x0[0x129] = dVar9;
    dVar5 = pdVar4[1];
    in_x0[0x12a] = dVar5;
    dVar10 = pdVar4[2];
    in_x0[299] = dVar10;
    if (lVar3 != 0) {
      pdVar4 = pdVar4 + 5;
      do {
        dVar13 = pdVar4[-2];
        dVar12 = pdVar4[-1];
        dVar11 = *pdVar4;
        if (dVar13 < dVar6) {
          in_x0[0x126] = dVar13;
          dVar6 = dVar13;
        }
        if (dVar12 < dVar7) {
          in_x0[0x127] = dVar12;
          dVar7 = dVar12;
        }
        if (dVar11 < dVar8) {
          in_x0[0x128] = dVar11;
          dVar8 = dVar11;
        }
        if (dVar9 < dVar13) {
          in_x0[0x129] = dVar13;
          dVar9 = dVar13;
        }
        if (dVar5 < dVar12) {
          in_x0[0x12a] = dVar12;
          dVar5 = dVar12;
        }
        if (dVar10 < dVar11) {
          in_x0[299] = dVar11;
          dVar10 = dVar11;
        }
        lVar3 = lVar3 + -1;
        pdVar4 = pdVar4 + 3;
      } while (lVar3 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_x0 + 300;
}


