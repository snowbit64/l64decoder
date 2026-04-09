// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
// Entry Point: 00a2b590
// Size: 424 bytes
// Signature: uint __cdecl __sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>(ZExtent * param_1, ZExtent * param_2, ZExtent * param_3, __less * param_4)


/* unsigned int std::__ndk1::__sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,
   LightListRasterizer::ZExtent>&, LightListRasterizer::ZExtent*>(LightListRasterizer::ZExtent*,
   LightListRasterizer::ZExtent*, LightListRasterizer::ZExtent*,
   std::__ndk1::__less<LightListRasterizer::ZExtent, LightListRasterizer::ZExtent>&) */

uint std::__ndk1::
     __sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
               (ZExtent *param_1,ZExtent *param_2,ZExtent *param_3,__less *param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  uVar4 = *(uint *)(param_2 + 4);
  if ((uVar4 < *(uint *)(param_1 + 4)) ||
     ((uVar4 <= *(uint *)(param_1 + 4) && (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8))))) {
    if ((*(uint *)(param_3 + 4) < uVar4) ||
       ((*(uint *)(param_3 + 4) <= uVar4 && (*(uint *)(param_3 + 8) < *(uint *)(param_2 + 8))))) {
      uVar1 = *(undefined4 *)(param_3 + 8);
      uVar5 = *(undefined8 *)param_1;
      uVar6 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      uVar4 = 1;
      *(undefined4 *)(param_1 + 8) = uVar1;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 8);
      uVar5 = *(undefined8 *)param_1;
      uVar6 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined4 *)(param_1 + 8) = uVar1;
      *(undefined8 *)param_2 = uVar5;
      *(undefined4 *)(param_2 + 8) = uVar6;
      uVar4 = (uint)((ulong)uVar5 >> 0x20);
      if ((uVar4 <= *(uint *)(param_3 + 4)) &&
         ((uVar4 < *(uint *)(param_3 + 4) || (*(uint *)(param_2 + 8) <= *(uint *)(param_3 + 8)))))
      goto LAB_00a2b710;
      uVar1 = *(undefined4 *)(param_3 + 8);
      uVar5 = *(undefined8 *)param_2;
      uVar6 = *(undefined4 *)(param_2 + 8);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      uVar4 = 2;
      *(undefined4 *)(param_2 + 8) = uVar1;
    }
    *(undefined8 *)param_3 = uVar5;
    *(undefined4 *)(param_3 + 8) = uVar6;
  }
  else {
    if ((uVar4 <= *(uint *)(param_3 + 4)) &&
       ((uVar4 < *(uint *)(param_3 + 4) || (*(uint *)(param_2 + 8) <= *(uint *)(param_3 + 8))))) {
      uVar4 = 0;
      goto LAB_00a2b714;
    }
    uVar1 = *(undefined4 *)(param_3 + 8);
    uVar5 = *(undefined8 *)param_2;
    uVar6 = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined4 *)(param_2 + 8) = uVar1;
    *(undefined8 *)param_3 = uVar5;
    *(undefined4 *)(param_3 + 8) = uVar6;
    if ((*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4)) ||
       ((*(uint *)(param_2 + 4) <= *(uint *)(param_1 + 4) &&
        (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8))))) {
      uVar1 = *(undefined4 *)(param_2 + 8);
      uVar5 = *(undefined8 *)param_1;
      uVar6 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar4 = 2;
      *(undefined4 *)(param_1 + 8) = uVar1;
      *(undefined8 *)param_2 = uVar5;
      *(undefined4 *)(param_2 + 8) = uVar6;
      goto LAB_00a2b714;
    }
LAB_00a2b710:
    uVar4 = 1;
  }
LAB_00a2b714:
  if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


