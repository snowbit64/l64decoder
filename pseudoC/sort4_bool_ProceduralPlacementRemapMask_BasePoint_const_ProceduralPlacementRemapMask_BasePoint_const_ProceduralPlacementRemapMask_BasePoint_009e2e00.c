// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
// Entry Point: 009e2e00
// Size: 392 bytes
// Signature: uint __cdecl __sort4<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>(BasePoint * param_1, BasePoint * param_2, BasePoint * param_3, BasePoint * param_4, _func_bool_BasePoint_ptr_BasePoint_ptr * param_5)


/* unsigned int std::__ndk1::__sort4<bool (*&)(ProceduralPlacementRemapMask::BasePoint const&,
   ProceduralPlacementRemapMask::BasePoint const&),
   ProceduralPlacementRemapMask::BasePoint*>(ProceduralPlacementRemapMask::BasePoint*,
   ProceduralPlacementRemapMask::BasePoint*, ProceduralPlacementRemapMask::BasePoint*,
   ProceduralPlacementRemapMask::BasePoint*, bool (*&)(ProceduralPlacementRemapMask::BasePoint
   const&, ProceduralPlacementRemapMask::BasePoint const&)) */

uint std::__ndk1::
     __sort4<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
               (BasePoint *param_1,BasePoint *param_2,BasePoint *param_3,BasePoint *param_4,
               _func_bool_BasePoint_ptr_BasePoint_ptr *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = (**(code **)param_5)(param_2,param_1);
  uVar2 = (**(code **)param_5)(param_3,param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_009e2ef0;
    }
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar3;
    uVar1 = (**(code **)param_5)(param_2,param_1);
    if ((uVar1 & 1) != 0) {
      uVar4 = 2;
      uVar3 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      goto LAB_009e2ef0;
    }
  }
  else {
    uVar3 = *(undefined8 *)param_1;
    if ((uVar2 & 1) != 0) {
      uVar4 = 1;
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar3;
      goto LAB_009e2ef0;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar3;
    uVar1 = (**(code **)param_5)(param_3,param_2);
    if ((uVar1 & 1) != 0) {
      uVar4 = 2;
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar3;
      goto LAB_009e2ef0;
    }
  }
  uVar4 = 1;
LAB_009e2ef0:
  uVar1 = (**(code **)param_5)(param_4,param_3);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = uVar3;
    uVar1 = (**(code **)param_5)(param_3,param_2);
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar3;
      uVar1 = (**(code **)param_5)(param_2,param_1);
      if ((uVar1 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        uVar4 = uVar4 + 3;
        uVar3 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar3;
      }
    }
  }
  return uVar4;
}


