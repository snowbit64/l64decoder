// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onGridResize
// Entry Point: 00a734f4
// Size: 856 bytes
// Signature: undefined __thiscall onGridResize(TerrainLayerTransformGroup * this, uint param_1, IRenderDevice * param_2)


/* TerrainLayerTransformGroup::onGridResize(unsigned int, IRenderDevice*) */

void __thiscall
TerrainLayerTransformGroup::onGridResize
          (TerrainLayerTransformGroup *this,uint param_1,IRenderDevice *param_2)

{
  int iVar1;
  Texture **ppTVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  ResourceManager *pRVar8;
  undefined8 uVar9;
  ITextureObject *pIVar10;
  size_t __n;
  char *__dest;
  Texture *this_00;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  undefined local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  char *local_88;
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  lVar17 = 0;
  pcVar13 = (char *)((ulong)&local_f0 | 1);
  uVar4 = *(int *)(this + 0x6b0) * param_1 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  iVar1 = uVar4 + 1;
  if (uVar4 == 0xffffffff) {
    iVar1 = 1;
  }
  *(int *)(this + 0x6ac) = iVar1;
  bVar7 = true;
  do {
    ppTVar2 = (Texture **)(this + lVar17 * 8 + 0x6c0);
    if (*(long *)(this + lVar17 * 8 + 0x6c0) != 0) {
      pRVar8 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(pRVar8,(Resource *)*ppTVar2);
      *ppTVar2 = (Texture *)0x0;
    }
    if (*(int *)(this + lVar17 * 4 + 0x698) != 0) {
      local_d8 = 0;
      uStack_d0 = 0;
      uVar19 = 0x24;
      if (*(int *)(this + lVar17 * 4 + 0x6a0) != 2) {
        uVar19 = 0x29;
      }
      uStack_c8 = 0xffffffff;
      local_ac = 0x21;
      if (*(int *)(this + lVar17 * 4 + 0x6a0) != 1) {
        local_ac = uVar19;
      }
      local_c4 = *(undefined4 *)(this + 0x6ac);
      local_a8 = 0;
      local_8c = 0;
      uStack_b4 = 0;
      local_bc = 0x100000001;
      uStack_cc = 0;
      uStack_94 = 0x3f80000000000000;
      local_9c = 0;
      local_a4 = 0x100001004;
      local_88 = "TerrainDetailTransformGroupDensityMap";
      uStack_c0 = local_c4;
      uVar9 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
      pIVar10 = (ITextureObject *)(**(code **)(*(long *)param_2 + 0x100))(param_2,uVar9,&local_d8);
      pcVar18 = *(char **)(this + 8);
      __n = strlen(pcVar18);
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        local_f0 = CONCAT71(local_f0._1_7_,(char)((int)__n << 1));
        __dest = pcVar13;
        if (__n != 0) goto LAB_00a736c4;
      }
      else {
        uVar11 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = (char *)operator_new(uVar11);
        local_f0 = uVar11 | 1;
        local_e8 = __n;
        local_e0 = __dest;
LAB_00a736c4:
        memcpy(__dest,pcVar18,__n);
      }
      __dest[__n] = '\0';
                    /* try { // try from 00a736d8 to 00a736ef has its CatchHandler @ 00a7385c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_f0);
      this_00 = (Texture *)operator_new(0x78);
      pcVar18 = pcVar13;
      if ((local_f0 & 1) != 0) {
        pcVar18 = local_e0;
      }
                    /* try { // try from 00a73708 to 00a7371b has its CatchHandler @ 00a7384c */
      Texture::Texture(this_00,pcVar18,2,pIVar10,false,true);
      *ppTVar2 = this_00;
      FUN_00f276d0(1,this_00 + 8);
                    /* try { // try from 00a7372c to 00a7373f has its CatchHandler @ 00a7385c */
      pRVar8 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::add(pRVar8,(Resource *)*ppTVar2,(ResourceDesc *)0x0,false);
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
    }
    lVar17 = 1;
    bVar6 = !bVar7;
    bVar7 = false;
    if (bVar6) {
      if (*(int *)(*(long *)(this + 0x630) + 0x8c) == 0) {
        uVar4 = *(uint *)(this + 0x6d0);
        uVar11 = (ulong)uVar4;
        local_d8 = 0;
        uStack_d0 = 0;
        uStack_ce = 0;
        uStack_cc = 0;
        if (uVar4 != 0) {
          if (uVar4 < 9) {
            lVar12 = 0;
          }
          else {
            uVar3 = 8;
            if ((uVar4 & 7) != 0) {
              uVar3 = uVar11 & 7;
            }
            lVar12 = uVar11 - uVar3;
            puVar15 = (undefined8 *)&uStack_c8;
            puVar14 = (undefined4 *)(this + 0x6fc);
            lVar17 = lVar12;
            do {
              uVar19 = *puVar14;
              uVar20 = puVar14[2];
              uVar21 = puVar14[4];
              uVar22 = puVar14[6];
              lVar17 = lVar17 + -8;
              uVar23 = puVar14[-8];
              uVar24 = puVar14[-6];
              puVar15[-1] = CONCAT44(puVar14[-2],puVar14[-4]);
              puVar15[-2] = CONCAT44(uVar24,uVar23);
              puVar15[1] = CONCAT44(uVar22,uVar21);
              *puVar15 = CONCAT44(uVar20,uVar19);
              puVar15 = puVar15 + 4;
              puVar14 = puVar14 + 0x10;
            } while (lVar17 != 0);
          }
          lVar17 = uVar11 - lVar12;
          puVar14 = (undefined4 *)((long)&local_d8 + lVar12 * 4);
          puVar16 = (undefined4 *)(this + lVar12 * 8 + 0x6dc);
          do {
            lVar17 = lVar17 + -1;
            *puVar14 = *puVar16;
            puVar14 = puVar14 + 1;
            puVar16 = puVar16 + 2;
          } while (lVar17 != 0);
        }
        BaseTerrain::setTerrainDetailTexture
                  ((BaseTerrain *)(*(long *)(this + 0x1f8) + 0x170),*(Texture **)(this + 0x6c0),
                   *(float *)(this + 0x174),*(uint *)(this + 0x6a8),(uint *)&local_d8);
        TerrainTransformGroup::updateTerrainDetailTexture();
      }
      if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


