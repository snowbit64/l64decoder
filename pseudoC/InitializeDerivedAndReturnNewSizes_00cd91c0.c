// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitializeDerivedAndReturnNewSizes
// Entry Point: 00cd91c0
// Size: 756 bytes
// Signature: undefined __thiscall InitializeDerivedAndReturnNewSizes(StreamTransformationFilter * this, NameValuePairs * param_1, ulong * param_2, ulong * param_3, ulong * param_4)


/* CryptoPP::StreamTransformationFilter::InitializeDerivedAndReturnNewSizes(CryptoPP::NameValuePairs
   const&, unsigned long&, unsigned long&, unsigned long&) */

void __thiscall
CryptoPP::StreamTransformationFilter::InitializeDerivedAndReturnNewSizes
          (StreamTransformationFilter *this,NameValuePairs *param_1,ulong *param_2,ulong *param_3,
          ulong *param_4)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  InvalidArgument *pIVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  uint uVar11;
  long *plVar12;
  undefined auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  bVar3 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,"BlockPaddingScheme",
                     &BlockPaddingSchemeDef::BlockPaddingScheme::typeinfo,&local_70);
  if (*(uint *)(this + 0xc4) < 2) {
    bVar2 = false;
  }
  else {
    iVar4 = (**(code **)(**(long **)(this + 0xb8) + 0x58))();
    bVar2 = iVar4 == 0;
  }
  uVar11 = 2;
  if (!bVar2) {
    uVar11 = 0;
  }
  if (((uint)local_70 == 5 | (bVar3 ^ 0xff) & 1) == 0) {
    uVar11 = (uint)local_70;
  }
  *(uint *)(this + 0xc0) = uVar11;
  if (!bVar2) {
    if (uVar11 == 4) {
      pIVar8 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd9360 to 00cd9367 has its CatchHandler @ 00cd9544 */
      (**(code **)(**(long **)(this + 0xb8) + 0x18))(auStack_88);
                    /* try { // try from 00cd9368 to 00cd937b has its CatchHandler @ 00cd9524 */
      puVar9 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               insert((ulong)auStack_88,(char *)0x0);
      local_60 = puVar9[2];
      uStack_68 = puVar9[1];
      local_70 = *puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
                    /* try { // try from 00cd9398 to 00cd93bf has its CatchHandler @ 00cd9500 */
      InvalidArgument::InvalidArgument(pIVar8,(basic_string *)&local_70);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar8,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    if (uVar11 == 3) {
      pIVar8 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd93dc to 00cd93e3 has its CatchHandler @ 00cd9540 */
      (**(code **)(**(long **)(this + 0xb8) + 0x18))(auStack_88);
                    /* try { // try from 00cd93e4 to 00cd93f7 has its CatchHandler @ 00cd94fc */
      puVar9 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               insert((ulong)auStack_88,(char *)0x0);
      local_60 = puVar9[2];
      uStack_68 = puVar9[1];
      local_70 = *puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
                    /* try { // try from 00cd9414 to 00cd943b has its CatchHandler @ 00cd94ec */
      InvalidArgument::InvalidArgument(pIVar8,(basic_string *)&local_70);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar8,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    if (uVar11 == 2) {
      pIVar8 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd9458 to 00cd945f has its CatchHandler @ 00cd953c */
      (**(code **)(**(long **)(this + 0xb8) + 0x18))(auStack_88);
                    /* try { // try from 00cd9460 to 00cd9473 has its CatchHandler @ 00cd94e8 */
      puVar9 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               insert((ulong)auStack_88,(char *)0x0);
      local_60 = puVar9[2];
      uStack_68 = puVar9[1];
      local_70 = *puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
                    /* try { // try from 00cd9490 to 00cd94b7 has its CatchHandler @ 00cd94bc */
      InvalidArgument::InvalidArgument(pIVar8,(basic_string *)&local_70);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar8,&InvalidArgument::typeinfo,Exception::~Exception);
    }
  }
  *param_2 = 0;
  *param_3 = (ulong)*(uint *)(this + 0xc4);
  plVar12 = *(long **)(this + 0xb8);
  iVar4 = (**(code **)(*plVar12 + 0x58))(plVar12);
  if (iVar4 == 0) {
    uVar5 = (**(code **)(*plVar12 + 0x28))(plVar12);
    if (uVar5 < 2) {
      uVar6 = 0;
      goto LAB_00cd9318;
    }
    uVar7 = (**(code **)(*plVar12 + 0x80))(plVar12);
    uVar6 = 0;
    if ((uVar11 < 2) || ((uVar7 & 1) != 0)) goto LAB_00cd9318;
    ppcVar10 = (code **)(*plVar12 + 0x28);
  }
  else {
    ppcVar10 = (code **)(*plVar12 + 0x58);
  }
  uVar6 = (**ppcVar10)(plVar12);
  uVar6 = uVar6 & 0xffffffff;
LAB_00cd9318:
  *param_4 = uVar6;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


