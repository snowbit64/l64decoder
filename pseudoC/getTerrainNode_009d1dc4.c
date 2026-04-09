// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTerrainNode
// Entry Point: 009d1dc4
// Size: 820 bytes
// Signature: undefined __cdecl getTerrainNode(TransformGroup * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProceduralPlacementManager::getTerrainNode(TransformGroup*) */

TransformGroup * ProceduralPlacementManager::getTerrainNode(TransformGroup *param_1)

{
  TransformGroup **ppTVar1;
  int iVar2;
  TransformGroup *pTVar3;
  ulong uVar4;
  TransformGroup **ppTVar5;
  
  if (((DAT_02111d80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02111d80), iVar2 != 0)) {
    DAT_02111cc0 = 0;
    DAT_02111cb8 = 0;
    DAT_02111c18 = &PTR__ProceduralPlacementManager_00fe2310;
    DAT_02111cb0 = &DAT_02111cb8;
    DAT_02111d38 = 0;
    DAT_02111d40 = 0;
    uRam0000000002111c28 = 0;
    _DAT_02111c20 = 0;
    uRam0000000002111c38 = 0;
    _DAT_02111c30 = 0;
    DAT_02111d30 = &DAT_02111d38;
    uRam0000000002111c48 = 0;
    _DAT_02111c40 = 0;
    uRam0000000002111c58 = 0;
    _DAT_02111c50 = 0;
    uRam0000000002111c68 = 0;
    _DAT_02111c60 = 0;
    uRam0000000002111c78 = 0;
    _DAT_02111c70 = 0;
    uRam0000000002111c88 = 0;
    _DAT_02111c80 = 0;
    uRam0000000002111c98 = 0;
    _DAT_02111c90 = 0;
    uRam0000000002111ca8 = 0;
    _DAT_02111ca0 = 0;
    uRam0000000002111cd0 = 0;
    _DAT_02111cc8 = 0;
    uRam0000000002111ce0 = 0;
    _DAT_02111cd8 = 0;
    uRam0000000002111cf0 = 0;
    _DAT_02111ce8 = 0;
    DAT_02111d00 = (TransformGroup *)0x0;
    _DAT_02111cf8 = 0;
    uRam0000000002111d10 = 0;
    _DAT_02111d08 = 0;
    uRam0000000002111d1a = 0;
    _DAT_02111d12 = 0;
    uRam0000000002111d18 = 0;
    DAT_02111d48 = 0x7fffffff;
    DAT_02111d50 = 0x7fffffff;
    uRam0000000002111d5c = 0;
    _DAT_02111d54 = 0;
    uRam0000000002111d6c = 0;
    _DAT_02111d64 = 0;
    DAT_02111d73._0_1_ = 0;
    DAT_02111d73._1_7_ = 0;
    __cxa_atexit(~ProceduralPlacementManager,&DAT_02111c18,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02111d80);
  }
  if (DAT_02111d00 == (TransformGroup *)0x0) {
    if (param_1 != (TransformGroup *)0x0) {
      ppTVar1 = *(TransformGroup ***)(param_1 + 0x28);
      iVar2 = (int)((ulong)(*(long *)(param_1 + 0x30) - (long)ppTVar1) >> 3);
      if (iVar2 != 0) {
        uVar4 = (ulong)(*(long *)(param_1 + 0x30) - (long)ppTVar1) >> 3 & 0xffffffff;
        ppTVar5 = ppTVar1;
        do {
          pTVar3 = *ppTVar5;
          if ((char)pTVar3[0x10] < '\0') {
            if ((DAT_02111d80 & 1) != 0) {
              DAT_02111d00 = pTVar3;
              return pTVar3;
            }
            iVar2 = __cxa_guard_acquire(&DAT_02111d80);
            if (iVar2 == 0) {
              DAT_02111d00 = pTVar3;
              return pTVar3;
            }
            DAT_02111cc0 = 0;
            DAT_02111cb8 = 0;
            DAT_02111c18 = &PTR__ProceduralPlacementManager_00fe2310;
            DAT_02111cb0 = &DAT_02111cb8;
            DAT_02111d38 = 0;
            DAT_02111d40 = 0;
            uRam0000000002111c28 = 0;
            _DAT_02111c20 = 0;
            uRam0000000002111c38 = 0;
            _DAT_02111c30 = 0;
            DAT_02111d30 = &DAT_02111d38;
            uRam0000000002111c48 = 0;
            _DAT_02111c40 = 0;
            uRam0000000002111c58 = 0;
            _DAT_02111c50 = 0;
            uRam0000000002111c68 = 0;
            _DAT_02111c60 = 0;
            uRam0000000002111c78 = 0;
            _DAT_02111c70 = 0;
            uRam0000000002111c88 = 0;
            _DAT_02111c80 = 0;
            uRam0000000002111c98 = 0;
            _DAT_02111c90 = 0;
            uRam0000000002111ca8 = 0;
            _DAT_02111ca0 = 0;
            uRam0000000002111cd0 = 0;
            _DAT_02111cc8 = 0;
            uRam0000000002111ce0 = 0;
            _DAT_02111cd8 = 0;
            uRam0000000002111cf0 = 0;
            _DAT_02111ce8 = 0;
            DAT_02111d00 = (TransformGroup *)0x0;
            _DAT_02111cf8 = 0;
            uRam0000000002111d10 = 0;
            _DAT_02111d08 = 0;
            uRam0000000002111d1a = 0;
            _DAT_02111d12 = 0;
            uRam0000000002111d18 = 0;
            DAT_02111d48 = 0x7fffffff;
            DAT_02111d50 = 0x7fffffff;
            uRam0000000002111d5c = 0;
            _DAT_02111d54 = 0;
            uRam0000000002111d6c = 0;
            _DAT_02111d64 = 0;
            DAT_02111d73._0_1_ = 0;
            DAT_02111d73._1_7_ = 0;
            __cxa_atexit(~ProceduralPlacementManager,&DAT_02111c18,&PTR_LOOP_00fd8de0);
            __cxa_guard_release(&DAT_02111d80);
            DAT_02111d00 = pTVar3;
            return pTVar3;
          }
          ppTVar5 = ppTVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        if (iVar2 != 0) {
          pTVar3 = (TransformGroup *)getTerrainNode(*ppTVar1);
          return pTVar3;
        }
      }
      param_1 = (TransformGroup *)0x0;
    }
  }
  else {
    param_1 = DAT_02111d00;
    if (((DAT_02111d80 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&DAT_02111d80), param_1 = DAT_02111d00, iVar2 != 0)) {
      DAT_02111cc0 = 0;
      DAT_02111cb8 = 0;
      DAT_02111c18 = &PTR__ProceduralPlacementManager_00fe2310;
      DAT_02111cb0 = &DAT_02111cb8;
      DAT_02111d38 = 0;
      DAT_02111d40 = 0;
      uRam0000000002111c28 = 0;
      _DAT_02111c20 = 0;
      uRam0000000002111c38 = 0;
      _DAT_02111c30 = 0;
      DAT_02111d30 = &DAT_02111d38;
      uRam0000000002111c48 = 0;
      _DAT_02111c40 = 0;
      uRam0000000002111c58 = 0;
      _DAT_02111c50 = 0;
      uRam0000000002111c68 = 0;
      _DAT_02111c60 = 0;
      uRam0000000002111c78 = 0;
      _DAT_02111c70 = 0;
      uRam0000000002111c88 = 0;
      _DAT_02111c80 = 0;
      uRam0000000002111c98 = 0;
      _DAT_02111c90 = 0;
      uRam0000000002111ca8 = 0;
      _DAT_02111ca0 = 0;
      uRam0000000002111cd0 = 0;
      _DAT_02111cc8 = 0;
      uRam0000000002111ce0 = 0;
      _DAT_02111cd8 = 0;
      uRam0000000002111cf0 = 0;
      _DAT_02111ce8 = 0;
      DAT_02111d00 = (TransformGroup *)0x0;
      _DAT_02111cf8 = 0;
      uRam0000000002111d10 = 0;
      _DAT_02111d08 = 0;
      uRam0000000002111d1a = 0;
      _DAT_02111d12 = 0;
      uRam0000000002111d18 = 0;
      DAT_02111d48 = 0x7fffffff;
      DAT_02111d50 = 0x7fffffff;
      uRam0000000002111d5c = 0;
      _DAT_02111d54 = 0;
      uRam0000000002111d6c = 0;
      _DAT_02111d64 = 0;
      DAT_02111d73._0_1_ = 0;
      DAT_02111d73._1_7_ = 0;
      __cxa_atexit(~ProceduralPlacementManager,&DAT_02111c18,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&DAT_02111d80);
      param_1 = DAT_02111d00;
    }
  }
  return param_1;
}


