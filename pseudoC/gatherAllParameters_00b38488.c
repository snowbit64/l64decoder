// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gatherAllParameters
// Entry Point: 00b38488
// Size: 368 bytes
// Signature: undefined __thiscall gatherAllParameters(AndroidHTTPSRequest * this, Range * param_1, basic_string * param_2)


/* AndroidHTTPSRequest::gatherAllParameters(BaseHTTPSRequest::Range const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void __thiscall
AndroidHTTPSRequest::gatherAllParameters
          (AndroidHTTPSRequest *this,Range *param_1,basic_string *param_2)

{
  ulong uVar1;
  AndroidHTTPSRequest AVar2;
  long lVar3;
  AndroidHTTPSRequest *pAVar4;
  undefined auStack_88 [64];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = (ulong)((byte)this[0x38] >> 1);
  if (((byte)this[0x38] & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  if (uVar1 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_2);
    pAVar4 = *(AndroidHTTPSRequest **)(this + 0x48);
    if (((byte)this[0x38] & 1) == 0) {
      pAVar4 = this + 0x39;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_2,(ulong)pAVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_2);
  }
  uVar1 = (ulong)((byte)this[0x50] >> 1);
  if (((byte)this[0x50] & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  if (uVar1 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_2);
    pAVar4 = *(AndroidHTTPSRequest **)(this + 0x60);
    if (((byte)this[0x50] & 1) == 0) {
      pAVar4 = this + 0x51;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_2,(ulong)pAVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_2);
  }
  if (param_1 != (Range *)0x0) {
    FUN_00b389f8(auStack_88,0x40,0x40,"Range:bytes=%llu-%llu\n",*(undefined8 *)param_1,
                 *(undefined8 *)(param_1 + 8));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_2);
  }
  AVar2 = this[0x20];
  uVar1 = (ulong)((byte)AVar2 >> 1);
  if (((byte)AVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  if (uVar1 != 0) {
    pAVar4 = *(AndroidHTTPSRequest **)(this + 0x30);
    if (((byte)AVar2 & 1) == 0) {
      pAVar4 = this + 0x21;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_2,(ulong)pAVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


