// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeVaryings
// Entry Point: 00c560a8
// Size: 692 bytes
// Signature: undefined __thiscall initializeVaryings(StructFieldRemapping * this, vector * param_1, uint param_2)


/* StructFieldRemapping::initializeVaryings(std::__ndk1::vector<StructFieldRemapping::VaryingTemp,
   std::__ndk1::allocator<StructFieldRemapping::VaryingTemp> >&, unsigned int) */

void __thiscall
StructFieldRemapping::initializeVaryings(StructFieldRemapping *this,vector *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint *local_80;
  uint *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_80 = (uint *)sortVaryingsByTypeSizeDesc;
  std::__ndk1::
  __sort<bool(*&)(StructFieldRemapping::VaryingTemp_const&,StructFieldRemapping::VaryingTemp_const&),StructFieldRemapping::VaryingTemp*>
            (*(VaryingTemp **)param_1,*(VaryingTemp **)(param_1 + 8),
             (_func_bool_VaryingTemp_ptr_VaryingTemp_ptr *)&local_80);
  lVar14 = *(long *)param_1;
  lVar10 = *(long *)(param_1 + 8);
  uVar7 = (*(long *)(this + 8) - *(long *)this) / 0x28;
  uVar17 = (lVar10 - lVar14 >> 4) + (uVar7 & 0xffffffff);
  if (uVar17 < uVar7 || uVar17 - uVar7 == 0) {
    if (uVar17 < uVar7) {
      *(ulong *)(this + 8) = *(long *)this + uVar17 * 0x28;
    }
  }
  else {
    std::__ndk1::vector<StructFieldMapping,std::__ndk1::allocator<StructFieldMapping>>::__append
              ((vector<StructFieldMapping,std::__ndk1::allocator<StructFieldMapping>> *)this,
               uVar17 - uVar7);
    lVar14 = *(long *)param_1;
    lVar10 = *(long *)(param_1 + 8);
  }
  local_80 = (uint *)0x0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  if (lVar10 != lVar14) {
    uVar17 = 0;
    do {
      lVar10 = lVar14 + uVar17 * 0x10;
      puVar18 = (uint *)(lVar10 + 4);
      uVar8 = *puVar18;
      uVar11 = ((long)local_78 - (long)local_80 >> 2) * -0x5555555555555555;
      puVar1 = (uint *)(lVar10 + 8);
      uVar3 = *(uint *)(lVar10 + 0xc) & 0xe0;
      if ((int)uVar11 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        puVar9 = local_80;
        do {
          uVar4 = *puVar9;
          if (((uVar4 + uVar8 < 5) && (puVar9[2] == uVar3)) && (puVar9[1] == *puVar1)) {
            *puVar9 = uVar4 + uVar8;
            uVar11 = uVar11 - (uVar15 & 0xffffffff);
            goto joined_r0x00c561ec;
          }
          uVar15 = uVar15 + 1;
          puVar9 = puVar9 + 3;
        } while ((uVar11 & 0xffffffff) != uVar15);
        uVar15 = uVar11 & 0xffffffff;
        uVar11 = uVar11 - uVar15;
      }
      uVar4 = 0;
joined_r0x00c561ec:
      if (uVar11 == 0) {
        local_8c = *puVar1;
                    /* try { // try from 00c56228 to 00c56233 has its CatchHandler @ 00c5635c */
        local_90 = uVar8;
        local_88 = uVar3;
        FUN_00c563b4(&local_80,&local_90);
        uVar8 = *puVar18;
      }
      lVar10 = *(long *)this;
      iVar16 = (int)uVar17;
      uVar11 = (ulong)(uint)(iVar16 + (int)uVar7);
      lVar13 = lVar10 + uVar11 * 0x28;
      iVar2 = (int)uVar15 + param_2;
      *(undefined4 *)(lVar13 + 8) = *(undefined4 *)(lVar14 + uVar17 * 0x10);
      *(int *)(lVar13 + 0xc) = iVar2;
      if (uVar8 != 0) {
        uVar15 = 0;
        do {
          *(uint *)(lVar10 + uVar11 * 0x28 + 0x10 + uVar15 * 4) = uVar4 + (int)uVar15;
          uVar15 = uVar15 + 1;
          uVar8 = *puVar18;
        } while (uVar15 < uVar8);
      }
      plVar12 = (long *)(lVar10 + uVar11 * 0x28);
      *(uint *)(plVar12 + 4) = uVar8;
      uVar3 = *puVar1;
      *plVar12 = 0;
      *(uint *)((long)plVar12 + 0x24) = uVar3;
      uVar11 = uVar7;
      if (uVar4 != 0) {
        for (; uVar17 != 0; uVar17 = uVar17 - 1) {
          lVar14 = lVar10 + (uVar11 & 0xffffffff) * 0x28;
          if (*(int *)(lVar14 + 0xc) == iVar2 && *(int *)(lVar14 + 0x10) == 0) {
            lVar10 = lVar10 + (uVar11 & 0xffffffff) * 0x28;
            uVar5 = *(uint *)(lVar10 + 0x20);
            *plVar12 = lVar10;
            uVar3 = uVar8 + uVar4;
            if (uVar8 + uVar4 <= uVar5) {
              uVar3 = uVar5;
            }
            *(uint *)(lVar10 + 0x20) = uVar3;
            break;
          }
          uVar11 = uVar11 + 1;
        }
      }
      lVar14 = *(long *)param_1;
      uVar17 = (ulong)(iVar16 + 1);
    } while (uVar17 < (ulong)(*(long *)(param_1 + 8) - lVar14 >> 4));
    if (local_80 != (uint *)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


