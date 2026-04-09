// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: qem
// Entry Point: 008fc938
// Size: 728 bytes
// Signature: undefined __cdecl qem(int param_1, int param_2, float param_3)


/* HeightMap::qem(int, int, float) const */

void HeightMap::qem(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  int in_w2;
  float *in_x8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  ushort uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8 [4];
  float fStack_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  undefined4 local_a8;
  float local_a4;
  float fStack_a0;
  undefined4 local_9c;
  float local_98;
  float fStack_94;
  undefined4 local_90;
  long local_88;
  
  plVar8 = (long *)(ulong)(uint)param_1;
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  iVar3 = *(int *)(plVar8 + 1);
  fStack_a0 = *(float *)(plVar8 + 2);
  uVar16 = *(undefined4 *)((long)plVar8 + 0x14);
  lVar9 = *plVar8;
  lVar10 = 0;
  iVar4 = iVar3 * in_w2;
  iVar5 = iVar3 + -1;
  local_c8[3] = fStack_a0 * (float)param_2;
  local_c8[1] = fStack_a0 * (float)in_w2;
  fVar27 = -(fStack_a0 * (float)param_2);
  fVar18 = -(fStack_a0 * (float)in_w2);
  iVar6 = *(int *)((long)plVar8 + 0xc) + -1;
  uVar17 = *(ushort *)(lVar9 + (long)(iVar4 + param_2) * 2);
  *(undefined8 *)(in_x8 + 8) = 0;
  in_x8[7] = fVar18;
  iVar1 = param_2;
  if (param_2 < 2) {
    iVar1 = 1;
  }
  in_x8[10] = 1.0;
  uVar29 = NEON_ucvtf((uint)uVar17);
  fVar12 = *(float *)(plVar8 + 3);
  in_x8[0xc] = fVar27;
  uVar30 = NEON_fmadd(local_c8[3],local_c8[3],local_c8[1] * local_c8[1]);
  in_x8[0xd] = fVar18;
  fVar18 = param_3 * 0.0;
  iVar2 = in_w2;
  if (in_w2 < 2) {
    iVar2 = 1;
  }
  fVar28 = (float)NEON_fnmadd(uVar29,uVar16,-fVar12);
  local_90 = NEON_fmadd(uVar29,uVar16,fVar12);
  if (param_2 + 1 <= iVar5) {
    iVar5 = param_2 + 1;
  }
  in_x8[6] = fVar18;
  in_x8[0xb] = fVar28;
  in_x8[0xe] = fVar28;
  fVar28 = (float)NEON_fmadd(local_90,local_90,uVar30);
  *(ulong *)(in_x8 + 9) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x8 + 9) >> 0x20) * param_3,
                (float)*(undefined8 *)(in_x8 + 9) * param_3);
  *(ulong *)(in_x8 + 7) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x8 + 7) >> 0x20) * param_3,
                (float)*(undefined8 *)(in_x8 + 7) * param_3);
  *in_x8 = param_3;
  in_x8[5] = param_3;
  fVar28 = fVar28 * param_3;
  *(ulong *)(in_x8 + 3) = CONCAT44(fVar18,fVar27 * param_3);
  *(ulong *)(in_x8 + 1) = CONCAT44(fVar18,fVar18);
  uVar26 = *(undefined8 *)(in_x8 + 4);
  uVar21 = *(undefined8 *)(in_x8 + 6);
  *(ulong *)(in_x8 + 0xd) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x8 + 0xd) >> 0x20) * param_3,
                (float)*(undefined8 *)(in_x8 + 0xd) * param_3);
  *(ulong *)(in_x8 + 0xb) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x8 + 0xb) >> 0x20) * param_3,
                (float)*(undefined8 *)(in_x8 + 0xb) * param_3);
  in_x8[0xf] = fVar28;
  if (in_w2 + 1 <= iVar6) {
    iVar6 = in_w2 + 1;
  }
  fVar18 = in_x8[0xe];
  local_c8[0] = fStack_a0 * (float)iVar5;
  uVar29 = NEON_ucvtf((uint)*(ushort *)(lVar9 + (long)(iVar5 + iVar4) * 2));
  fVar27 = *in_x8;
  fVar23 = in_x8[1];
  local_c8[2] = (float)NEON_fmadd(uVar29,uVar16,fVar12);
  fVar24 = in_x8[2];
  fVar25 = in_x8[3];
  fStack_b8 = fStack_a0 * (float)iVar6;
  uVar29 = NEON_ucvtf((uint)*(ushort *)(lVar9 + (long)(param_2 + iVar6 * iVar3) * 2));
  local_b0 = fStack_a0 * (float)(iVar1 + -1);
  local_b4 = NEON_fmadd(uVar29,uVar16,fVar12);
  uVar20 = *(undefined8 *)(in_x8 + 8);
  uVar22 = *(undefined8 *)(in_x8 + 10);
  uVar29 = NEON_ucvtf((uint)*(ushort *)(lVar9 + (long)(iVar4 + iVar1 + -1) * 2));
  fStack_a0 = fStack_a0 * (float)(iVar2 + -1);
  uVar19 = *(undefined8 *)(in_x8 + 0xc);
  local_a8 = NEON_fmadd(uVar29,uVar16,fVar12);
  uVar29 = NEON_ucvtf((uint)*(ushort *)(lVar9 + (long)(param_2 + iVar3 * (iVar2 + -1)) * 2));
  local_9c = NEON_fmadd(uVar29,uVar16,fVar12);
  lVar9 = 3;
  lVar11 = 0;
  fStack_ac = local_c8[1];
  local_a4 = local_c8[3];
  local_98 = local_c8[3];
  fStack_94 = local_c8[1];
  do {
    Plane::Plane((Plane *)&local_d8,(Vector3 *)&local_98,(Vector3 *)(local_c8 + lVar9 * 3),
                 (Vector3 *)((long)local_c8 + lVar10));
    lVar10 = lVar10 + 0xc;
    fVar12 = (float)local_d8;
    fVar13 = (float)((ulong)local_d8 >> 0x20);
    fVar15 = (float)((ulong)uStack_d0 >> 0x20);
    fVar14 = (float)uStack_d0;
    fVar27 = fVar12 * fVar12 + fVar27;
    fVar23 = fVar12 * fVar13 + fVar23;
    fVar24 = fVar12 * fVar14 + fVar24;
    uVar21 = CONCAT44(fVar15 * fVar13 + (float)((ulong)uVar21 >> 0x20),
                      fVar14 * fVar13 + (float)uVar21);
    uVar22 = CONCAT44(fVar15 * fVar14 + (float)((ulong)uVar22 >> 0x20),
                      fVar14 * fVar14 + (float)uVar22);
    fVar25 = fVar12 * fVar15 + fVar25;
    uVar26 = CONCAT44(fVar13 * fVar13 + (float)((ulong)uVar26 >> 0x20),
                      fVar12 * fVar13 + (float)uVar26);
    fVar18 = fVar15 * fVar14 + fVar18;
    *in_x8 = fVar27;
    in_x8[1] = fVar23;
    uVar20 = CONCAT44(fVar14 * fVar13 + (float)((ulong)uVar20 >> 0x20),
                      fVar12 * fVar14 + (float)uVar20);
    uVar19 = CONCAT44(fVar15 * fVar13 + (float)((ulong)uVar19 >> 0x20),
                      fVar12 * fVar15 + (float)uVar19);
    fVar28 = fVar15 * fVar15 + fVar28;
    in_x8[2] = fVar24;
    in_x8[3] = fVar25;
    *(undefined8 *)(in_x8 + 4) = uVar26;
    *(undefined8 *)(in_x8 + 6) = uVar21;
    *(undefined8 *)(in_x8 + 10) = uVar22;
    *(undefined8 *)(in_x8 + 8) = uVar20;
    *(undefined8 *)(in_x8 + 0xc) = uVar19;
    in_x8[0xe] = fVar18;
    in_x8[0xf] = fVar28;
    lVar9 = lVar11;
    lVar11 = lVar11 + 1;
  } while (lVar10 != 0x30);
  if (*(long *)(lVar7 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


