// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Console
// Entry Point: 006d46e0
// Size: 508 bytes
// Signature: undefined __thiscall ~Console(Console * this)


/* WARNING: Type propagation algorithm not settling */
/* Console::~Console() */

void __thiscall Console::~Console(Console *this)

{
  Console CVar1;
  bool bVar2;
  Console **ppCVar3;
  byte *pbVar4;
  Console *pCVar5;
  undefined8 *this_00;
  byte *pbVar6;
  byte *pbVar7;
  Console **ppCVar8;
  
  this_00 = (undefined8 *)(this + 0x28);
  *(undefined ***)this = &PTR__Console_00fd9088;
  ppCVar8 = (Console **)*this_00;
  while (ppCVar8 != (Console **)(this + 0x30)) {
    if ((long *)ppCVar8[7] != (long *)0x0) {
      (**(code **)(*(long *)ppCVar8[7] + 8))();
    }
    ppCVar3 = (Console **)ppCVar8[1];
    if ((Console **)ppCVar8[1] == (Console **)0x0) {
      ppCVar3 = ppCVar8 + 2;
      bVar2 = *(Console ***)*ppCVar3 != ppCVar8;
      ppCVar8 = (Console **)*ppCVar3;
      if (bVar2) {
        do {
          pCVar5 = *ppCVar3;
          ppCVar3 = (Console **)(pCVar5 + 0x10);
          ppCVar8 = (Console **)*ppCVar3;
        } while (*ppCVar8 != pCVar5);
      }
    }
    else {
      do {
        ppCVar8 = ppCVar3;
        ppCVar3 = (Console **)*ppCVar8;
      } while ((Console **)*ppCVar8 != (Console **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
             *)this_00,*(__tree_node **)(this + 0x30));
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(Console **)(this + 0x28) = this + 0x30;
  Mutex::~Mutex((Mutex *)(this + 0x130));
  if (((byte)this[0xf0] & 1) == 0) {
    CVar1 = this[0xd0];
  }
  else {
    operator_delete(*(void **)(this + 0x100));
    CVar1 = this[0xd0];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x98];
  }
  else {
    operator_delete(*(void **)(this + 0xe0));
    CVar1 = this[0x98];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x80];
  }
  else {
    operator_delete(*(void **)(this + 0xa8));
    CVar1 = this[0x80];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x60];
  }
  else {
    operator_delete(*(void **)(this + 0x90));
    CVar1 = this[0x60];
  }
  if (((byte)CVar1 & 1) == 0) {
    pbVar6 = *(byte **)(this + 0x40);
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    pbVar6 = *(byte **)(this + 0x40);
  }
  if (pbVar6 != (byte *)0x0) {
    pbVar4 = *(byte **)(this + 0x48);
    pbVar7 = pbVar6;
    if (pbVar4 != pbVar6) {
      do {
        pbVar7 = pbVar4 + -0x20;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -0x10));
        }
        pbVar4 = pbVar7;
      } while (pbVar7 != pbVar6);
      pbVar7 = *(byte **)(this + 0x40);
    }
    *(byte **)(this + 0x48) = pbVar6;
    operator_delete(pbVar7);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
             *)this_00,*(__tree_node **)(this + 0x30));
  pbVar6 = *(byte **)(this + 8);
  if (pbVar6 != (byte *)0x0) {
    pbVar4 = *(byte **)(this + 0x10);
    pbVar7 = pbVar6;
    if (pbVar4 != pbVar6) {
      do {
        pbVar7 = pbVar4 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        pbVar4 = pbVar7;
      } while (pbVar7 != pbVar6);
      pbVar7 = *(byte **)(this + 8);
    }
    *(byte **)(this + 0x10) = pbVar6;
    operator_delete(pbVar7);
    return;
  }
  return;
}


