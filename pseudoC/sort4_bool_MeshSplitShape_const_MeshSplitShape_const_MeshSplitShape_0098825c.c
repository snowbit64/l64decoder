// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
// Entry Point: 0098825c
// Size: 388 bytes
// Signature: uint __cdecl __sort4<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>(MeshSplitShape * * param_1, MeshSplitShape * * param_2, MeshSplitShape * * param_3, MeshSplitShape * * param_4, _func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr * param_5)


/* unsigned int std::__ndk1::__sort4<bool (*&)(MeshSplitShape const*, MeshSplitShape const*),
   MeshSplitShape**>(MeshSplitShape**, MeshSplitShape**, MeshSplitShape**, MeshSplitShape**, bool
   (*&)(MeshSplitShape const*, MeshSplitShape const*)) */

uint std::__ndk1::__sort4<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
               (MeshSplitShape **param_1,MeshSplitShape **param_2,MeshSplitShape **param_3,
               MeshSplitShape **param_4,_func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr *param_5)

{
  ulong uVar1;
  ulong uVar2;
  MeshSplitShape *pMVar3;
  uint uVar4;
  
  uVar1 = (**(code **)param_5)(*param_2,*param_1);
  uVar2 = (**(code **)param_5)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_00988348;
    }
    pMVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pMVar3;
    uVar1 = (**(code **)param_5)(*param_2,*param_1);
    if ((uVar1 & 1) != 0) {
      uVar4 = 2;
      pMVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = pMVar3;
      goto LAB_00988348;
    }
  }
  else {
    pMVar3 = *param_1;
    if ((uVar2 & 1) != 0) {
      uVar4 = 1;
      *param_1 = *param_3;
      *param_3 = pMVar3;
      goto LAB_00988348;
    }
    *param_1 = *param_2;
    *param_2 = pMVar3;
    uVar1 = (**(code **)param_5)(*param_3);
    if ((uVar1 & 1) != 0) {
      uVar4 = 2;
      pMVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = pMVar3;
      goto LAB_00988348;
    }
  }
  uVar4 = 1;
LAB_00988348:
  uVar1 = (**(code **)param_5)(*param_4,*param_3);
  if ((uVar1 & 1) != 0) {
    pMVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = pMVar3;
    uVar1 = (**(code **)param_5)(*param_3,*param_2);
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      pMVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = pMVar3;
      uVar1 = (**(code **)param_5)(*param_2,*param_1);
      if ((uVar1 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        uVar4 = uVar4 + 3;
        pMVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = pMVar3;
      }
    }
  }
  return uVar4;
}


