// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateWheelsMotorSpeedContribution
// Entry Point: 009b5f6c
// Size: 352 bytes
// Signature: undefined updateWheelsMotorSpeedContribution(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2RaycastVehicle::updateWheelsMotorSpeedContribution() */

void Bt2RaycastVehicle::updateWheelsMotorSpeedContribution(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  long in_x0;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float afStack_68 [20];
  long local_18;
  
  lVar5 = tpidr_el0;
  local_18 = *(long *)(lVar5 + 0x28);
  uVar2 = *(uint *)(in_x0 + 0x3c);
  uVar6 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    lVar8 = *(long *)(in_x0 + 0x48);
    if (uVar2 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar6 & 0xfffffffe;
      uVar11 = uVar10;
      lVar7 = lVar8;
      do {
        *(undefined4 *)(lVar7 + 0x188) = 0xbf800000;
        uVar11 = uVar11 - 2;
        *(undefined4 *)(lVar7 + 0x328) = 0xbf800000;
        lVar7 = lVar7 + 0x340;
      } while (uVar11 != 0);
      if (uVar10 == uVar6) goto LAB_009b5ff4;
    }
    lVar7 = uVar6 - uVar10;
    puVar9 = (undefined4 *)(lVar8 + uVar10 * 0x1a0 + 0x188);
    do {
      *puVar9 = 0xbf800000;
      puVar9 = puVar9 + 0x68;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
LAB_009b5ff4:
  iVar3 = *(int *)(in_x0 + 0x5c);
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1;
    afStack_68[(int)uVar2] = 1.0;
    if (0 < iVar3) {
      lVar8 = *(long *)(in_x0 + 0x48);
      puVar12 = (ushort *)(*(long *)(in_x0 + 0x68) + (ulong)uVar2 * 0xc + 8);
      uVar6 = (ulong)uVar2;
      do {
        fVar13 = afStack_68[uVar6];
        fVar14 = *(float *)(puVar12 + -4);
        uVar4 = *puVar12;
        fVar15 = fVar13 * fVar14;
        if ((ulong)uVar4 < 0x14) {
          lVar7 = lVar8 + (ulong)uVar4 * 0x1a0;
          *(float *)(lVar7 + 0x188) = fVar15 * *(float *)(lVar7 + 0xe0);
        }
        else {
          afStack_68[uVar4 - 0x14] = fVar15;
        }
        uVar4 = puVar12[1];
        fVar13 = fVar13 * (1.0 - fVar14);
        if ((ulong)uVar4 < 0x14) {
          lVar7 = lVar8 + (ulong)uVar4 * 0x1a0;
          *(float *)(lVar7 + 0x188) = fVar13 * *(float *)(lVar7 + 0xe0);
        }
        else {
          afStack_68[uVar4 - 0x14] = fVar13;
        }
        puVar12 = puVar12 + -6;
        bVar1 = 0 < (long)uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar1);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


