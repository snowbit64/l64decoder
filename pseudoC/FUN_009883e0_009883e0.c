// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009883e0
// Entry Point: 009883e0
// Size: 260 bytes
// Signature: undefined FUN_009883e0(void)


uint FUN_009883e0(MeshSplitShape **param_1,MeshSplitShape **param_2,MeshSplitShape **param_3,
                 MeshSplitShape **param_4,MeshSplitShape **param_5,code **param_6)

{
  uint uVar1;
  ulong uVar2;
  MeshSplitShape *pMVar3;
  
  uVar1 = std::__ndk1::
          __sort4<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
                    (param_1,param_2,param_3,param_4,
                     (_func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr *)param_6);
  uVar2 = (**param_6)(*param_5,*param_4);
  if ((uVar2 & 1) != 0) {
    pMVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = pMVar3;
    uVar2 = (**param_6)(*param_4,*param_3);
    if ((uVar2 & 1) == 0) {
      uVar1 = uVar1 + 1;
    }
    else {
      pMVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = pMVar3;
      uVar2 = (**param_6)(*param_3,*param_2);
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar1 + 2;
      }
      else {
        pMVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = pMVar3;
        uVar2 = (**param_6)(*param_2,*param_1);
        if ((uVar2 & 1) == 0) {
          uVar1 = uVar1 + 3;
        }
        else {
          uVar1 = uVar1 + 4;
          pMVar3 = *param_1;
          *param_1 = *param_2;
          *param_2 = pMVar3;
        }
      }
    }
  }
  return uVar1;
}


