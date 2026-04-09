// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StoreInitialize
// Entry Point: 00cdc8fc
// Size: 284 bytes
// Signature: undefined __thiscall StoreInitialize(StringStore * this, NameValuePairs * param_1)


/* CryptoPP::StringStore::StoreInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall CryptoPP::StringStore::StoreInitialize(StringStore *this,NameValuePairs *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  InvalidArgument *this_00;
  basic_string abStack_88 [6];
  char local_70 [8];
  void *local_68;
  ulong uStack_60;
  ulong local_50;
  ulong local_48;
  void *pvStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_50 = 0xffffffffffffffff;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_70[0] = '\0';
                    /* try { // try from 00cdc940 to 00cdc95b has its CatchHandler @ 00cdca50 */
  uVar4 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,"InputBuffer",&ConstByteArrayParameter::typeinfo,local_70);
  if ((uVar4 & 1) == 0) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cdc9d8 to 00cdc9e7 has its CatchHandler @ 00cdca3c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_88,"StringStore: missing InputBuffer argument");
                    /* try { // try from 00cdc9ec to 00cdca13 has its CatchHandler @ 00cdca18 */
    InvalidArgument::InvalidArgument(this_00,abStack_88);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  *(undefined8 *)(this + 0x30) = 0;
  uVar4 = uStack_60;
  pvVar3 = local_68;
  if (local_70[0] != '\0') {
    uVar4 = local_48;
    pvVar3 = pvStack_40;
  }
  uVar1 = local_50;
  if (local_48 <= local_50) {
    uVar1 = local_48;
  }
  *(void **)(this + 0x20) = pvVar3;
  *(ulong *)(this + 0x28) = uVar4;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvStack_40 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cdc9a4 to 00cdc9a7 has its CatchHandler @ 00cdca4c */
  UnalignedDeallocate(pvStack_40);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


