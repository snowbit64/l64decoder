// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: indicesToPointers
// Entry Point: 00f79bb8
// Size: 1004 bytes
// Signature: undefined __thiscall indicesToPointers(btSoftBody * this, int * param_1)


/* btSoftBody::indicesToPointers(int const*) */

void __thiscall btSoftBody::indicesToPointers(btSoftBody *this,int *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  uVar2 = *(uint *)(this + 0x374);
  lVar7 = *(long *)(this + 0x380);
  lVar1 = 0;
  if (uVar2 != 0) {
    lVar1 = lVar7;
  }
  if (0 < (int)uVar2) {
    lVar4 = 0;
    while( true ) {
      lVar9 = *(long *)(lVar7 + lVar4 + 0x68);
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x28) = lVar7 + lVar4;
      }
      if ((ulong)uVar2 * 0x78 + -0x78 == lVar4) break;
      lVar7 = *(long *)(this + 0x380);
      lVar4 = lVar4 + 0x78;
    }
  }
  if (0 < (int)*(uint *)(this + 0x394)) {
    lVar7 = 0;
    lVar4 = (ulong)*(uint *)(this + 0x394) * 0x48;
    if (param_1 == (int *)0x0) {
      do {
        *(long *)(*(long *)(this + 0x3a0) + lVar7 + 0x10) =
             lVar1 + *(long *)(*(long *)(this + 0x3a0) + lVar7 + 0x10) * 0x78;
        lVar9 = *(long *)(this + 0x3a0) + lVar7;
        lVar7 = lVar7 + 0x48;
        *(long *)(lVar9 + 0x18) = lVar1 + *(long *)(lVar9 + 0x18) * 0x78;
      } while (lVar4 - lVar7 != 0);
    }
    else {
      do {
        *(long *)(*(long *)(this + 0x3a0) + lVar7 + 0x10) =
             lVar1 + (long)param_1[*(long *)(*(long *)(this + 0x3a0) + lVar7 + 0x10)] * 0x78;
        lVar9 = *(long *)(this + 0x3a0) + lVar7;
        lVar7 = lVar7 + 0x48;
        *(long *)(lVar9 + 0x18) = lVar1 + (long)param_1[*(long *)(lVar9 + 0x18)] * 0x78;
      } while (lVar4 - lVar7 != 0);
    }
  }
  if (0 < (int)*(uint *)(this + 0x3b4)) {
    lVar7 = 0;
    lVar4 = (ulong)*(uint *)(this + 0x3b4) * 0x48;
    if (param_1 == (int *)0x0) {
      do {
        *(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x10) =
             lVar1 + *(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x10) * 0x78;
        *(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x18) =
             lVar1 + *(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x18) * 0x78;
        *(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x20) =
             lVar1 + *(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x20) * 0x78;
        lVar9 = *(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x40);
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x28) = *(long *)(this + 0x3c0) + lVar7;
        }
        lVar7 = lVar7 + 0x48;
      } while (lVar4 - lVar7 != 0);
    }
    else {
      do {
        *(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x10) =
             lVar1 + (long)param_1[*(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x10)] * 0x78;
        *(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x18) =
             lVar1 + (long)param_1[*(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x18)] * 0x78;
        *(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x20) =
             lVar1 + (long)param_1[*(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x20)] * 0x78;
        lVar9 = *(long *)(*(long *)(this + 0x3c0) + lVar7 + 0x40);
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x28) = *(long *)(this + 0x3c0) + lVar7;
        }
        lVar7 = lVar7 + 0x48;
      } while (lVar4 - lVar7 != 0);
    }
  }
  uVar2 = *(uint *)(this + 0x3f4);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    plVar6 = *(long **)(this + 0x400);
    if (param_1 == (int *)0x0) {
      if (uVar2 != 1) {
        uVar8 = uVar5 & 0xfffffffe;
        plVar10 = plVar6;
        uVar11 = uVar8;
        do {
          uVar11 = uVar11 - 2;
          *plVar10 = lVar1 + *plVar10 * 0x78;
          plVar10[0xd] = lVar1 + plVar10[0xd] * 0x78;
          plVar10 = plVar10 + 0x1a;
        } while (uVar11 != 0);
        if (uVar8 == uVar5) goto LAB_00f79ebc;
      }
      else {
        uVar8 = 0;
      }
      lVar7 = uVar5 - uVar8;
      plVar6 = plVar6 + uVar8 * 0xd;
      do {
        lVar7 = lVar7 + -1;
        *plVar6 = lVar1 + *plVar6 * 0x78;
        plVar6 = plVar6 + 0xd;
      } while (lVar7 != 0);
    }
    else {
      if (uVar2 != 1) {
        uVar8 = uVar5 & 0xfffffffe;
        plVar10 = plVar6;
        uVar11 = uVar8;
        do {
          uVar11 = uVar11 - 2;
          iVar3 = param_1[plVar10[0xd]];
          *plVar10 = lVar1 + (long)param_1[*plVar10] * 0x78;
          plVar10[0xd] = lVar1 + (long)iVar3 * 0x78;
          plVar10 = plVar10 + 0x1a;
        } while (uVar11 != 0);
        if (uVar8 == uVar5) goto LAB_00f79ebc;
      }
      else {
        uVar8 = 0;
      }
      lVar7 = uVar5 - uVar8;
      plVar6 = plVar6 + uVar8 * 0xd;
      do {
        lVar7 = lVar7 + -1;
        *plVar6 = lVar1 + (long)param_1[*plVar6] * 0x78;
        plVar6 = plVar6 + 0xd;
      } while (lVar7 != 0);
    }
  }
LAB_00f79ebc:
  uVar2 = *(uint *)(this + 0x354);
  if (0 < (int)uVar2) {
    lVar4 = *(long *)(this + 0x360);
    uVar5 = 0;
    lVar7 = 0x28;
    if (param_1 == (int *)0x0) {
      do {
        if (0 < *(int *)(lVar4 + uVar5 * 0x58 + 0x20)) {
          lVar9 = 0;
          do {
            lVar12 = lVar9 * 8;
            lVar9 = lVar9 + 1;
            *(long *)(lVar4 + lVar7 + lVar12) = lVar1 + *(long *)(lVar4 + lVar7 + lVar12) * 0x78;
            lVar4 = *(long *)(this + 0x360);
          } while (lVar9 < *(int *)(lVar4 + uVar5 * 0x58 + 0x20));
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x58;
      } while (uVar5 != uVar2);
    }
    else {
      do {
        if (0 < *(int *)(lVar4 + uVar5 * 0x58 + 0x20)) {
          lVar9 = 0;
          do {
            lVar12 = lVar9 * 8;
            lVar9 = lVar9 + 1;
            *(long *)(lVar4 + lVar7 + lVar12) =
                 lVar1 + (long)param_1[*(long *)(lVar4 + lVar7 + lVar12)] * 0x78;
            lVar4 = *(long *)(this + 0x360);
          } while (lVar9 < *(int *)(lVar4 + uVar5 * 0x58 + 0x20));
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x58;
      } while (uVar5 != uVar2);
    }
  }
  return;
}


