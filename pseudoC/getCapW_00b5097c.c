// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCapW
// Entry Point: 00b5097c
// Size: 580 bytes
// Signature: undefined __thiscall getCapW(ClippingMesh * this, ClippingMesh * param_1, float param_2)


/* ClippingMesh::getCapW(ClippingMesh&, float) const */

void __thiscall ClippingMesh::getCapW(ClippingMesh *this,ClippingMesh *param_1,float param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  float *pfVar14;
  float fVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (*(int *)(this + 0x18) != 0) {
    Vector4::set((Vector4 *)&local_48,0.0,0.0,0.0,0.0);
    uVar2 = *(uint *)(this + 0x18);
    if (uVar2 != 0) {
      lVar10 = *(long *)this;
      lVar8 = *(long *)(this + 8);
      uVar11 = 0;
      uVar9 = 0;
      do {
        uVar3 = *(uint *)(lVar8 + (ulong)(uint)((int)uVar11 << 1) * 4);
        uVar13 = (ulong)uVar3;
        if (uVar3 != 0) {
          pfVar14 = (float *)(lVar10 + 8 +
                             (ulong)*(uint *)(lVar8 + (ulong)((int)uVar11 << 1 | 1) * 4) * 0x10);
          do {
            if (pfVar14[1] == param_2) {
              uVar9 = uVar9 + 1;
              local_48 = CONCAT44(pfVar14[-1] + local_48._4_4_,pfVar14[-2] + (float)local_48);
              fStack_40 = *pfVar14 + fStack_40;
            }
            pfVar14 = pfVar14 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar2);
      if (uVar9 != 0) {
        fVar15 = 1.0 / (float)(ulong)uVar9;
        local_48 = CONCAT44((float)((ulong)local_48 >> 0x20) * fVar15,(float)local_48 * fVar15);
        fStack_40 = fVar15 * fStack_40;
        fStack_3c = param_2;
        if (uVar2 != 0) {
          uVar11 = 0;
          do {
            uVar2 = *(uint *)(lVar8 + (ulong)(uint)((int)uVar11 << 1) * 4);
            uVar13 = (ulong)uVar2;
            uVar9 = *(uint *)(lVar8 + (ulong)((int)uVar11 << 1 | 1) * 4);
            *(undefined4 *)(param_1 + 0x10) = 0;
            if (uVar2 != 0) {
              puVar7 = (undefined8 *)(lVar10 + (ulong)uVar9 * 0x10);
              uVar9 = 0;
              bVar5 = *(float *)((long)puVar7 + (ulong)(uVar2 - 1) * 0x10 + 0xc) != param_2;
              do {
                bVar6 = *(float *)((long)puVar7 + 0xc) == param_2;
                if (bVar6) {
                  iVar16 = *(int *)(param_1 + 0x14);
                  lVar10 = *(long *)param_1;
                  puVar12 = puVar7;
LAB_00b50adc:
                  puVar1 = (undefined8 *)(lVar10 + (ulong)(uVar9 + iVar16) * 0x10);
                  uVar17 = *puVar12;
                  puVar1[1] = puVar12[1];
                  *puVar1 = uVar17;
                  uVar9 = *(int *)(param_1 + 0x10) + 1;
                  *(uint *)(param_1 + 0x10) = uVar9;
                  bVar5 = !bVar6;
                }
                else {
                  if (!bVar5) {
                    iVar16 = *(int *)(param_1 + 0x14);
                    lVar10 = *(long *)param_1;
                    puVar12 = &local_48;
                    goto LAB_00b50adc;
                  }
                  bVar5 = true;
                }
                puVar7 = puVar7 + 2;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
              if (2 < uVar9) {
                lVar10 = *(long *)(param_1 + 8);
                *(uint *)(lVar10 + (ulong)(uint)(*(int *)(param_1 + 0x18) << 1) * 4) = uVar9;
                *(undefined4 *)(lVar10 + (ulong)(*(int *)(param_1 + 0x18) << 1 | 1) * 4) =
                     *(undefined4 *)(param_1 + 0x14);
                iVar16 = *(int *)(param_1 + 0x10);
                *(undefined4 *)(param_1 + 0x10) = 0;
                *(ulong *)(param_1 + 0x14) =
                     CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1,
                              (int)*(undefined8 *)(param_1 + 0x14) + iVar16);
              }
            }
            uVar11 = uVar11 + 1;
            if (*(uint *)(this + 0x18) <= uVar11) break;
            lVar10 = *(long *)this;
            lVar8 = *(long *)(this + 8);
          } while( true );
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


