// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTile
// Entry Point: 00ba683c
// Size: 1804 bytes
// Signature: undefined __thiscall processTile(Bt2HeightfieldTerrainShape * this, btTriangleCallback * param_1, int param_2, int param_3)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Bt2HeightfieldTerrainShape::processTile(btTriangleCallback*, int, int) const */

void __thiscall
Bt2HeightfieldTerrainShape::processTile
          (Bt2HeightfieldTerrainShape *this,btTriangleCallback *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 local_d0;
  ulong uStack_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  long local_a0;
  
  lVar11 = tpidr_el0;
  local_a0 = *(long *)(lVar11 + 0x28);
  if (*(long *)(this + 0x78) != 0) {
    iVar4 = *(int *)(this + 0x70);
    iVar7 = *(int *)(this + 0x68) * param_2;
    iVar21 = *(int *)(this + 0x6c) * param_3;
    iVar2 = iVar7 + *(int *)(this + 0x68);
    iVar3 = iVar21 + *(int *)(this + 0x6c);
    if (iVar4 <= iVar2) {
      iVar2 = iVar4 + -1;
    }
    if (*(int *)(this + 0x74) <= iVar3) {
      iVar3 = *(int *)(this + 0x74) + -1;
    }
    if (iVar21 <= iVar3) {
      lVar16 = (long)iVar21;
      bVar14 = false;
      pcVar17 = (char *)(*(long *)(this + 0x78) + iVar4 * lVar16 + (long)iVar7);
      do {
        pcVar19 = pcVar17;
        iVar10 = (iVar2 - iVar7) + 1;
        if (iVar7 - iVar2 == 0 || iVar7 < iVar2) {
          do {
            if (*pcVar19 != '\0') {
              bVar14 = true;
              break;
            }
            pcVar19 = pcVar19 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        lVar16 = lVar16 + 1;
        pcVar17 = pcVar17 + iVar4;
      } while (iVar3 + 1 != (int)lVar16);
      if (bVar14) {
        if (iVar21 < iVar3) {
          iVar4 = param_2 + 1;
          iVar10 = param_3 + 1;
          iVar9 = -param_2;
          iVar22 = iVar21;
          do {
            iVar21 = iVar21 + 1;
            iVar1 = iVar22 + 1;
            if (iVar7 < iVar2) {
              lVar16 = (long)iVar7;
              do {
                iVar5 = *(int *)(this + 0x40);
                iVar20 = (int)lVar16;
                iVar8 = iVar5 * param_3;
                lVar15 = *(long *)(this + 0x60);
                fVar28 = *(float *)(this + 0x80) *
                         (float)(ulong)(uint)(iVar20 + iVar9 * *(int *)(this + 0x68));
                fVar23 = *(float *)(this + 0x84) *
                         (float)(ulong)(uint)(iVar22 - *(int *)(this + 0x6c) * param_3);
                fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + (long)(iVar8 + iVar4) * 2));
                fVar25 = *(float *)(this + 0x58);
                fVar27 = fVar25 * fVar27;
                if (fVar28 + fVar23 <= 1.0) {
                  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(param_2 + iVar5 * iVar10) * 2))
                  ;
                  fVar32 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + (long)(iVar8 + param_2) * 2)
                                            );
                  uVar33 = NEON_fmadd(fVar27,fVar28,fVar23 * fVar25 * fVar12);
                  uVar33 = NEON_fmadd(fVar25 * fVar32,(1.0 - fVar28) - fVar23,uVar33);
                  uVar29 = (undefined2)uVar33;
                  uVar30 = (undefined2)((uint)uVar33 >> 0x10);
                }
                else {
                  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(iVar5 * iVar10 + param_2) * 2))
                  ;
                  fVar32 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(iVar5 * iVar10 + iVar4) * 2));
                  uVar33 = NEON_fmadd(fVar27,1.0 - fVar23,(1.0 - fVar28) * fVar25 * fVar12);
                  uVar33 = NEON_fmadd(fVar25 * fVar32,fVar28 + fVar23 + -1.0,uVar33);
                  uVar29 = (undefined2)uVar33;
                  uVar30 = (undefined2)((uint)uVar33 >> 0x10);
                }
                iVar6 = *(int *)(this + 0x70);
                lVar18 = *(long *)(this + 0x78);
                uVar33 = NEON_ucvtf((uint)*(byte *)(lVar18 + iVar22 * iVar6 + lVar16));
                fVar32 = *(float *)(this + 0x84) *
                         (float)(ulong)(uint)(iVar1 - *(int *)(this + 0x6c) * param_3);
                uVar31 = *(undefined4 *)(this + 0x90);
                fVar12 = (float)NEON_fmadd(uVar33,uVar31,CONCAT22(uVar30,uVar29));
                fStack_ac = *(float *)(this + 0x98);
                local_c0 = ((float)iVar20 - *(float *)(this + 0x88)) * *(float *)(this + 0x94);
                fStack_a8 = ((float)iVar22 - *(float *)(this + 0x8c)) * *(float *)(this + 0x9c);
                local_d0 = CONCAT44(fVar12 * fStack_ac,local_c0);
                uStack_c8 = (ulong)(uint)fStack_a8;
                if (fVar28 + fVar32 <= 1.0) {
                  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(param_2 + iVar5 * iVar10) * 2))
                  ;
                  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + (long)(iVar8 + param_2) * 2)
                                            );
                  uVar33 = NEON_fmadd(fVar27,fVar28,fVar32 * fVar25 * fVar12);
                  uVar33 = NEON_fmadd(fVar25 * fVar13,(1.0 - fVar28) - fVar32,uVar33);
                  uVar29 = (undefined2)uVar33;
                  uVar30 = (undefined2)((uint)uVar33 >> 0x10);
                }
                else {
                  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(iVar5 * iVar10 + param_2) * 2))
                  ;
                  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(iVar5 * iVar10 + iVar4) * 2));
                  uVar33 = NEON_fmadd(fVar27,1.0 - fVar32,(1.0 - fVar28) * fVar25 * fVar12);
                  uVar33 = NEON_fmadd(fVar25 * fVar13,fVar28 + fVar32 + -1.0,uVar33);
                  uVar29 = (undefined2)uVar33;
                  uVar30 = (undefined2)((uint)uVar33 >> 0x10);
                }
                local_b8 = ((float)iVar1 - *(float *)(this + 0x8c)) * *(float *)(this + 0x9c);
                local_b4 = 0;
                uVar33 = NEON_ucvtf((uint)*(byte *)(lVar18 + (iVar20 + iVar21 * iVar6)));
                fVar28 = *(float *)(this + 0x80) *
                         (float)(ulong)(iVar20 + iVar9 * *(int *)(this + 0x68) + 1);
                local_bc = (float)NEON_fmadd(uVar33,uVar31,CONCAT22(uVar30,uVar29));
                local_bc = fStack_ac * local_bc;
                if (fVar28 + fVar23 <= 1.0) {
                  fVar32 = (float)NEON_ucvtf((uint)*(ushort *)(lVar15 + (long)(iVar8 + param_2) * 2)
                                            );
                  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(param_2 + iVar5 * iVar10) * 2))
                  ;
                  uVar33 = NEON_fmadd(fVar27,fVar28,fVar23 * fVar25 * fVar12);
                  uVar33 = NEON_fmadd(fVar25 * fVar32,(1.0 - fVar28) - fVar23,uVar33);
                }
                else {
                  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(iVar5 * iVar10 + param_2) * 2))
                  ;
                  fVar32 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(iVar5 * iVar10 + iVar4) * 2));
                  uVar33 = NEON_fmadd(fVar27,1.0 - fVar23,(1.0 - fVar28) * fVar25 * fVar12);
                  uVar33 = NEON_fmadd(fVar25 * fVar32,fVar28 + fVar23 + -1.0,uVar33);
                }
                uStack_a4 = 0;
                uVar26 = NEON_ucvtf((uint)*(byte *)(lVar18 + (iVar20 + iVar22 * iVar6 + 1)));
                fVar28 = (float)NEON_fmadd(uVar26,uVar31,uVar33);
                local_b0 = ((float)(iVar20 + 1) - *(float *)(this + 0x88)) * *(float *)(this + 0x94)
                ;
                fStack_ac = fStack_ac * fVar28;
                (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_d0,~param_2,param_3);
                iVar5 = *(int *)(this + 0x40);
                uStack_c8 = CONCAT44(uStack_a4,fStack_a8);
                local_d0 = CONCAT44(fStack_ac,local_b0);
                lVar15 = *(long *)(this + 0x60);
                fVar25 = *(float *)(this + 0x80) *
                         (float)(ulong)(iVar20 + iVar9 * *(int *)(this + 0x68) + 1);
                fVar28 = *(float *)(this + 0x84) *
                         (float)(ulong)(uint)(iVar1 - *(int *)(this + 0x6c) * param_3);
                fVar27 = (float)NEON_ucvtf((uint)*(ushort *)
                                                  (lVar15 + (long)(iVar5 * param_3 + iVar4) * 2));
                fVar23 = *(float *)(this + 0x58);
                if (fVar25 + fVar28 <= 1.0) {
                  fVar32 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(iVar5 * param_3 + param_2) * 2)
                                            );
                  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(param_2 + iVar5 * iVar10) * 2))
                  ;
                  uVar33 = NEON_fmadd(fVar23 * fVar27,fVar25,fVar28 * fVar23 * fVar12);
                  uVar33 = NEON_fmadd(fVar23 * fVar32,(1.0 - fVar25) - fVar28,uVar33);
                }
                else {
                  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(iVar5 * iVar10 + param_2) * 2))
                  ;
                  fVar32 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar15 + (long)(iVar5 * iVar10 + iVar4) * 2));
                  uVar33 = NEON_fmadd(fVar23 * fVar27,1.0 - fVar28,(1.0 - fVar25) * fVar23 * fVar12)
                  ;
                  uVar33 = NEON_fmadd(fVar23 * fVar32,fVar25 + fVar28 + -1.0,uVar33);
                }
                uStack_a4 = 0;
                uVar31 = NEON_ucvtf((uint)*(byte *)(*(long *)(this + 0x78) +
                                                   (long)(iVar20 + iVar21 * *(int *)(this + 0x70) +
                                                         1)));
                fStack_ac = (float)NEON_fmadd(uVar31,*(undefined4 *)(this + 0x90),uVar33);
                fStack_a8 = ((float)iVar1 - *(float *)(this + 0x8c)) * *(float *)(this + 0x9c);
                local_b0 = ((float)(iVar20 + 1) - *(float *)(this + 0x88)) *
                           (float)*(undefined8 *)(this + 0x94);
                fStack_ac = fStack_ac * (float)((ulong)*(undefined8 *)(this + 0x94) >> 0x20);
                (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_d0,~param_2,param_3);
                lVar16 = lVar16 + 1;
              } while (iVar2 != (int)lVar16);
            }
            iVar22 = iVar1;
          } while (iVar1 != iVar3);
        }
        goto LAB_00ba6f04;
      }
    }
  }
  lVar16 = *(long *)(this + 0x60);
  iVar4 = *(int *)(this + 0x40) * param_3;
  fVar28 = *(float *)(this + 0x58);
  fStack_ac = *(float *)(this + 0xa8);
  iVar2 = param_3 + 1;
  iVar3 = param_2 + 1;
  fStack_a8 = ((float)param_3 - *(float *)(this + 0x54)) * *(float *)(this + 0xac);
  local_c0 = ((float)param_2 - *(float *)(this + 0x50)) * *(float *)(this + 0xa4);
  fVar23 = (float)iVar2;
  fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(lVar16 + (long)(iVar4 + param_2) * 2));
  local_b8 = (fVar23 - *(float *)(this + 0x54)) * *(float *)(this + 0xac);
  local_d0 = CONCAT44(fVar28 * fVar25 * fStack_ac,local_c0);
  uStack_c8 = (ulong)(uint)fStack_a8;
  local_b4 = 0;
  fVar25 = (float)NEON_ucvtf((uint)*(ushort *)
                                    (lVar16 + (long)(param_2 + *(int *)(this + 0x40) * iVar2) * 2));
  local_b0 = ((float)iVar3 - *(float *)(this + 0x50)) * *(float *)(this + 0xa4);
  local_bc = fStack_ac * fVar28 * fVar25;
  uStack_a4 = 0;
  fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(lVar16 + (long)(iVar4 + iVar3) * 2));
  fStack_ac = fStack_ac * fVar28 * fVar25;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_d0,param_2,param_3);
  uStack_c8 = CONCAT44(uStack_a4,fStack_a8);
  local_d0 = CONCAT44(fStack_ac,local_b0);
  uStack_a4 = 0;
  fVar28 = (float)NEON_ucvtf((uint)*(ushort *)
                                    (*(long *)(this + 0x60) +
                                    (long)(iVar3 + *(int *)(this + 0x40) * iVar2) * 2));
  fVar25 = (float)*(undefined8 *)(this + 0x54);
  fVar27 = (float)((ulong)*(undefined8 *)(this + 0x54) >> 0x20);
  uVar24 = NEON_ext(CONCAT44(fVar28 * fVar27,fVar23 * fVar25),CONCAT44(0.0 - fVar27,fVar23 - fVar25)
                    ,4,1);
  local_b0 = ((float)iVar3 - *(float *)(this + 0x50)) * *(float *)(this + 0xa4);
  fStack_ac = (float)uVar24 * (float)*(undefined8 *)(this + 0xa8);
  fStack_a8 = (float)((ulong)uVar24 >> 0x20) * (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_d0,param_2,param_3);
LAB_00ba6f04:
  if (*(long *)(lVar11 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


