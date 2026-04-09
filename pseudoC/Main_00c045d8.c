// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Main
// Entry Point: 00c045d8
// Size: 380 bytes
// Signature: undefined __thiscall Main(Main * this, CompressionDictionary * param_1)


/* DictionaryCompressor::Main::Main(CompressionDictionary*) */

void __thiscall DictionaryCompressor::Main::Main(Main *this,CompressionDictionary *param_1)

{
  long *plVar1;
  long lVar2;
  DictString *pDVar3;
  DictString *pDVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined2 local_58;
  char local_56;
  uint local_54;
  undefined4 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(CompressionDictionary **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_createPerThreadData_00fed078;
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x18) == 0) {
    pDVar4 = (DictString *)0x0;
    pDVar3 = (DictString *)0x0;
  }
  else {
    uVar8 = 0;
    lVar9 = 4;
    do {
      local_54 = *(uint *)(*(long *)((long)param_1 + 0x10) + uVar8 * 4);
      plVar1 = (long *)((long)param_1 + 8);
      if (uVar8 != (int)uVar5 - 1) {
        plVar1 = (long *)(*(long *)((long)param_1 + 0x10) + lVar9);
      }
      uStack_50 = (undefined4)uVar8;
      local_56 = (char)*(undefined4 *)plVar1 - (char)local_54;
      local_58 = CONCAT11(*(undefined *)(*(long *)param_1 + (ulong)(local_54 + 1)),
                          *(undefined *)(*(long *)param_1 + (ulong)local_54));
                    /* try { // try from 00c04674 to 00c0467f has its CatchHandler @ 00c04758 */
      FUN_00c04774(this + 0x20,&local_58);
      param_1 = *(CompressionDictionary **)(this + 0x10);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
      uVar5 = (ulong)*(uint *)((long)param_1 + 0x18);
    } while (uVar8 < uVar5);
    pDVar3 = *(DictString **)(this + 0x20);
    pDVar4 = *(DictString **)(this + 0x28);
  }
                    /* try { // try from 00c046a8 to 00c046af has its CatchHandler @ 00c04754 */
  std::__ndk1::
  __sort<std::__ndk1::__less<DictionaryCompressor::Main::DictString,DictionaryCompressor::Main::DictString>&,DictionaryCompressor::Main::DictString*>
            (pDVar3,pDVar4,(__less *)&local_58);
  lVar9 = *(long *)(this + 0x20);
  uVar5 = 0;
  uVar6 = 0;
  uVar8 = (*(long *)(this + 0x28) - lVar9 >> 2) * -0x5555555555555555;
  do {
    uVar7 = (ulong)uVar6;
    *(uint *)(this + uVar5 * 4 + 0x38) = uVar6;
    if (uVar7 <= uVar8 && uVar8 - uVar7 != 0) {
      do {
        if (uVar5 != *(ushort *)(lVar9 + uVar7 * 0xc)) break;
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (uVar7 <= uVar8 && uVar8 - uVar7 != 0);
      uVar6 = (uint)uVar7;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 0x10000) {
      *(uint *)(this + 0x40038) = uVar6;
      if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


