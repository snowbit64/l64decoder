// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeVertexVolumes
// Entry Point: 008d12ac
// Size: 552 bytes
// Signature: undefined __thiscall serializeVertexVolumes(FillPlaneGeometry * this, File * param_1)


/* FillPlaneGeometry::serializeVertexVolumes(File&) const */

bool __thiscall FillPlaneGeometry::serializeVertexVolumes(FillPlaneGeometry *this,File *param_1)

{
  undefined (*pauVar1) [12];
  undefined (*pauVar2) [16];
  void *pvVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  void *__s;
  float *pfVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  float *pfVar14;
  void *pvVar15;
  ulong uVar16;
  void *pvVar17;
  ulong uVar18;
  float fVar19;
  undefined auVar20 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined4 local_4c;
  long local_48;
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar4 = *(uint *)(this + 0x130);
  uVar18 = (ulong)uVar4;
  if (uVar4 == 0) {
    __s = (void *)0x0;
    pvVar17 = (void *)0x0;
  }
  else {
    uVar16 = uVar18 * 4;
    __s = operator_new(uVar16);
    memset(__s,0,uVar16);
    pvVar17 = (void *)((long)__s + uVar16);
    if (uVar4 != 0) {
      pvVar3 = *(void **)(this + 0xe0);
      fVar19 = (float)(unkuint9)(ulong)(*(long *)(this + 0xe8) - (long)pvVar3 >> 5) /
               (float)(ulong)uVar4;
      if ((uVar4 < 9) ||
         ((__s < (void *)((long)pvVar3 + uVar18 * 0x20 + -0x1c) &&
          (pvVar3 < (void *)((long)__s + uVar18 * 4))))) {
        lVar11 = 0;
      }
      else {
        pfVar10 = (float *)((long)__s + 0x10);
        uVar16 = 8;
        if ((uVar4 & 7) != 0) {
          uVar16 = uVar18 & 7;
        }
        puVar13 = (undefined8 *)((long)pvVar3 + 0x80);
        lVar11 = uVar18 - uVar16;
        lVar12 = lVar11;
        do {
          auVar25 = *(undefined (*) [16])(puVar13 + -4);
          lVar12 = lVar12 + -8;
          auVar24 = *(undefined (*) [16])(puVar13 + -8);
          pauVar1 = (undefined (*) [12])(puVar13 + 0xc);
          pauVar2 = (undefined (*) [16])(puVar13 + 8);
          uVar26 = *(undefined8 *)*pauVar2;
          auVar20._4_12_ = auVar25._4_12_;
          auVar20._0_4_ = auVar24._0_4_;
          auVar22._12_4_ = auVar25._12_4_;
          auVar22._0_8_ = auVar20._0_8_;
          auVar22._8_4_ = auVar24._4_4_;
          auVar21._8_8_ = auVar22._8_8_;
          auVar21._4_4_ = auVar25._0_4_;
          auVar21._0_4_ = auVar24._0_4_;
          auVar23._0_12_ = auVar21._0_12_;
          auVar23._12_4_ = auVar25._4_4_;
          uVar6 = puVar13[-0xc];
          uVar7 = puVar13[-0x10];
          uVar27 = puVar13[4];
          uVar28 = *puVar13;
          puVar13 = puVar13 + 0x20;
          auVar24 = NEON_ext(auVar24,auVar23,8,1);
          auVar25._4_4_ = SUB124(*pauVar1,0);
          auVar25._0_4_ = (int)uVar26;
          auVar25._8_4_ = (int)((ulong)uVar26 >> 0x20);
          auVar25._12_4_ = SUB124(*pauVar1,4);
          auVar25 = NEON_ext(*pauVar2,auVar25,8,1);
          *pfVar10 = fVar19 * auVar24._8_4_;
          pfVar10[1] = fVar19 * auVar24._12_4_;
          pfVar10[-4] = fVar19 * (float)uVar7;
          pfVar10[-3] = fVar19 * (float)uVar6;
          pfVar10[4] = auVar25._8_4_ * fVar19;
          pfVar10[5] = auVar25._12_4_ * fVar19;
          *pfVar10 = (float)uVar28 * fVar19;
          pfVar10[1] = (float)uVar27 * fVar19;
          pfVar10 = pfVar10 + 8;
        } while (lVar12 != 0);
      }
      lVar12 = uVar18 - lVar11;
      pfVar10 = (float *)((long)pvVar3 + lVar11 * 0x20);
      pfVar14 = (float *)((long)__s + lVar11 * 4);
      do {
        lVar12 = lVar12 + -1;
        *pfVar14 = fVar19 * *pfVar10;
        pfVar10 = pfVar10 + 8;
        pfVar14 = pfVar14 + 1;
      } while (lVar12 != 0);
    }
  }
                    /* try { // try from 008d1404 to 008d143b has its CatchHandler @ 008d14d4 */
  iVar9 = (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 0x118,4);
  if (iVar9 == 4) {
    local_4c = (undefined4)((ulong)((long)pvVar17 - (long)__s) >> 2);
    iVar9 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_4c,4);
    pvVar3 = __s;
    pvVar15 = __s;
    if (iVar9 == 4) {
                    /* try { // try from 008d145c to 008d146b has its CatchHandler @ 008d14d8 */
      while ((pvVar3 != pvVar17 &&
             (iVar9 = (**(code **)(*(long *)param_1 + 0x30))(param_1,pvVar3,4), pvVar15 = pvVar3,
             iVar9 == 4))) {
        pvVar3 = (void *)((long)pvVar3 + 4);
        pvVar15 = pvVar17;
      }
      bVar8 = pvVar15 == pvVar17;
      goto joined_r0x008d1498;
    }
  }
  bVar8 = false;
joined_r0x008d1498:
  if (__s != (void *)0x0) {
    operator_delete(__s);
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


