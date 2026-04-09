// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRegisterDetails
// Entry Point: 00c3e898
// Size: 228 bytes
// Signature: undefined __thiscall setRegisterDetails(IR_RegisterSet * this, uint param_1, RegisterInfo * param_2)


/* IR_RegisterSet::setRegisterDetails(unsigned int, IR_RegisterSet::RegisterInfo const*) */

void __thiscall
IR_RegisterSet::setRegisterDetails(IR_RegisterSet *this,uint param_1,RegisterInfo *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *this_00;
  ulong uVar6;
  long lVar7;
  
  if (param_2 != (RegisterInfo *)0x0) {
    uVar6 = (ulong)param_1;
    this_00 = (long *)(this + 8);
    lVar3 = *(long *)(this + 0x10) - *this_00 >> 3;
    uVar4 = lVar3 * -0x3333333333333333;
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      uVar5 = (ulong)(param_1 + 1);
      if (uVar5 <= uVar4) {
        if (uVar5 <= uVar4 && uVar4 - uVar5 != 0) {
          lVar7 = *this_00 + uVar5 * 0x28;
          lVar3 = *(long *)(this + 0x10);
          while (lVar2 = lVar3, lVar2 != lVar7) {
            lVar3 = lVar2 + -0x28;
            if ((*(byte *)(lVar2 + -0x20) & 1) != 0) {
              operator_delete(*(void **)(lVar2 + -0x10));
            }
          }
          *(long *)(this + 0x10) = lVar7;
        }
      }
      else {
        std::__ndk1::
        vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>::
        __append((vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                  *)this_00,uVar5 + lVar3 * 0x3333333333333333);
      }
    }
    puVar1 = (undefined *)(*this_00 + uVar6 * 0x28);
    *puVar1 = 1;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar1 + 8),(basic_string *)(param_2 + 8));
    *(undefined8 *)(*this_00 + uVar6 * 0x28 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  return;
}


