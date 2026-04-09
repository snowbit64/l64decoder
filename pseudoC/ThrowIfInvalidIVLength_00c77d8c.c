// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThrowIfInvalidIVLength
// Entry Point: 00c77d8c
// Size: 656 bytes
// Signature: undefined __thiscall ThrowIfInvalidIVLength(SimpleKeyingInterface * this, int param_1)


/* CryptoPP::SimpleKeyingInterface::ThrowIfInvalidIVLength(int) */

int __thiscall
CryptoPP::SimpleKeyingInterface::ThrowIfInvalidIVLength(SimpleKeyingInterface *this,int param_1)

{
  long lVar1;
  uint uVar2;
  InvalidArgument *pIVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined auStack_e8 [24];
  undefined auStack_d0 [24];
  char acStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char acStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 < 0) {
    param_1 = (**(code **)(*(long *)this + 0x48))(this);
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00c77e30;
  }
  else {
    uVar2 = (**(code **)(*(long *)this + 0x50))(this);
    if ((uint)param_1 < uVar2) {
      pIVar3 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c77e48 to 00c77e5f has its CatchHandler @ 00c781c8 */
      plVar4 = (long *)(**(code **)(*(long *)this + 0x70))(this);
      (**(code **)(*plVar4 + 0x18))(acStack_b8);
                    /* try { // try from 00c77e60 to 00c77e6f has its CatchHandler @ 00c781ac */
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(acStack_b8);
      local_90 = puVar5[2];
      uStack_98 = puVar5[1];
      local_a0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 00c77e88 to 00c77e97 has its CatchHandler @ 00c78178 */
      IntToString<int>(param_1,10);
                    /* try { // try from 00c77e98 to 00c77ea7 has its CatchHandler @ 00c78140 */
      FUN_00c751d0(acStack_88,&local_a0,auStack_d0);
                    /* try { // try from 00c77ea8 to 00c77eb7 has its CatchHandler @ 00c78108 */
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(acStack_88);
      local_60 = puVar5[2];
      uStack_68 = puVar5[1];
      local_70 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 00c77ed8 to 00c77eeb has its CatchHandler @ 00c780d0 */
      uVar2 = (**(code **)(*(long *)this + 0x50))(this);
      IntToString<unsigned_int>(uVar2,10);
                    /* try { // try from 00c77eec to 00c77efb has its CatchHandler @ 00c78098 */
      FUN_00c751d0(abStack_50,&local_70,auStack_e8);
                    /* try { // try from 00c77f00 to 00c77f27 has its CatchHandler @ 00c78054 */
      InvalidArgument::InvalidArgument(pIVar3,abStack_50);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar3,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    uVar2 = (**(code **)(*(long *)this + 0x58))(this);
    if (uVar2 < (uint)param_1) {
      pIVar3 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c77f40 to 00c77f57 has its CatchHandler @ 00c781c4 */
      plVar4 = (long *)(**(code **)(*(long *)this + 0x70))(this);
      (**(code **)(*plVar4 + 0x18))(acStack_b8);
                    /* try { // try from 00c77f58 to 00c77f67 has its CatchHandler @ 00c781a8 */
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(acStack_b8);
      local_90 = puVar5[2];
      uStack_98 = puVar5[1];
      local_a0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 00c77f80 to 00c77f8f has its CatchHandler @ 00c78164 */
      IntToString<int>(param_1,10);
                    /* try { // try from 00c77f90 to 00c77f9f has its CatchHandler @ 00c7812c */
      FUN_00c751d0(acStack_88,&local_a0,auStack_d0);
                    /* try { // try from 00c77fa0 to 00c77faf has its CatchHandler @ 00c780f4 */
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(acStack_88);
      local_60 = puVar5[2];
      uStack_68 = puVar5[1];
      local_70 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 00c77fd0 to 00c77fe3 has its CatchHandler @ 00c780bc */
      uVar2 = (**(code **)(*(long *)this + 0x58))(this);
      IntToString<unsigned_int>(uVar2,10);
                    /* try { // try from 00c77fe4 to 00c77ff3 has its CatchHandler @ 00c78040 */
      FUN_00c751d0(abStack_50,&local_70,auStack_e8);
                    /* try { // try from 00c77ff8 to 00c7801f has its CatchHandler @ 00c78020 */
      InvalidArgument::InvalidArgument(pIVar3,abStack_50);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar3,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00c77e30:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return param_1;
}


