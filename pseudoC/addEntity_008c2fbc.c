// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addEntity
// Entry Point: 008c2fbc
// Size: 328 bytes
// Signature: undefined __thiscall addEntity(DecalCullingStructure * this, CullingEntity * param_1, float param_2, float param_3, float param_4, float param_5)


/* DecalCullingStructure::addEntity(DecalCullingStructure::CullingEntity*, float, float, float,
   float) */

void __thiscall
DecalCullingStructure::addEntity
          (DecalCullingStructure *this,CullingEntity *param_1,float param_2,float param_3,
          float param_4,float param_5)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  void **ppvVar4;
  CullingEntity **ppCVar5;
  short sVar6;
  void *__dest;
  void *__src;
  uint uVar7;
  ulong uVar8;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ppvVar4 = (void **)getGridCell(this,param_2,param_3,param_4,param_5,&uStack_6c,&local_70,&local_74
                                );
  uVar1 = *(ushort *)(ppvVar4 + 1);
  uVar8 = (ulong)uVar1;
  uVar2 = *(ushort *)((long)ppvVar4 + 10);
  if (uVar1 < uVar2) {
    __dest = *ppvVar4;
  }
  else {
    sVar6 = 8;
    if (0x3f < uVar2) {
      sVar6 = 0x20;
    }
    uVar2 = sVar6 + uVar2;
    *(ushort *)((long)ppvVar4 + 10) = uVar2;
    __dest = operator_new__(((ulong)uVar2 + (ulong)uVar2 * 2) * 8);
    if (uVar1 == 0) {
      __src = *ppvVar4;
    }
    else {
      __src = *ppvVar4;
      memcpy(__dest,__src,uVar8 * 0x18);
    }
    if (__src != (void *)0x0) {
      operator_delete__(__src);
      uVar8 = (ulong)*(ushort *)(ppvVar4 + 1);
    }
    *ppvVar4 = __dest;
  }
  uVar7 = (uint)uVar8;
  if (0x7ffe < uVar7) {
    uVar7 = 0x7fff;
  }
  ppCVar5 = (CullingEntity **)((long)__dest + uVar8 * 0x18);
  *(float *)(ppCVar5 + 1) = param_2;
  *(float *)((long)ppCVar5 + 0xc) = param_3;
  *(float *)(ppCVar5 + 2) = param_4;
  *(float *)((long)ppCVar5 + 0x14) = param_5;
  *ppCVar5 = param_1;
  *(short *)(ppvVar4 + 1) = (short)uVar8 + 1;
  *(uint *)param_1 = uStack_6c | uVar7 << 0x11 | local_70 << 3 | local_74 << 10;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


