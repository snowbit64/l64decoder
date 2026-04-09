// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputBinary
// Entry Point: 00c5aac4
// Size: 708 bytes
// Signature: undefined __cdecl outputBinary(bool param_1, AST_BinaryNode * param_2, AST_Traverser * param_3)


/* TIRDebugUtil::OutputTraverser::outputBinary(bool, AST_BinaryNode*, AST_Traverser*) */

undefined8
TIRDebugUtil::OutputTraverser::outputBinary
          (bool param_1,AST_BinaryNode *param_2,AST_Traverser *param_3)

{
  long lVar1;
  void *pvVar2;
  basic_string *pbVar3;
  byte local_b8 [16];
  void *local_a8;
  undefined auStack_9c [100];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar3 = *(basic_string **)(param_3 + 0x50);
  outputTreeText(pbVar3,(AST_Node *)param_2,*(int *)(param_3 + 0x48));
  FUN_00c5aa20(auStack_9c,100,"%p 2RY ",param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  switch(*(undefined4 *)(param_2 + 0x48)) {
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    break;
  case 0x3e:
    break;
  case 0x3f:
    break;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    break;
  case 0x44:
    break;
  case 0x47:
    break;
  case 0x48:
    break;
  case 0x49:
    break;
  case 0x4a:
    break;
  case 0x4c:
    break;
  case 0x4d:
    break;
  case 0x4e:
    break;
  case 0x4f:
    break;
  case 0x50:
    break;
  case 0x51:
    break;
  case 0x52:
    break;
  case 0x8a:
    break;
  case 0x8b:
    break;
  case 0x8c:
    break;
  case 0x8d:
    break;
  case 0x8e:
    break;
  case 0x8f:
    break;
  case 0x90:
    break;
  case 0x91:
    break;
  case 0x92:
    break;
  case 0x93:
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  SHC_Type::getUserString();
  pvVar2 = (void *)((ulong)local_b8 | 1);
  if ((local_b8[0] & 1) != 0) {
    pvVar2 = local_a8;
  }
                    /* try { // try from 00c5ad24 to 00c5ad2b has its CatchHandler @ 00c5ad88 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3,(ulong)pvVar2);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


