// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputAggregate
// Entry Point: 00c5afa0
// Size: 1124 bytes
// Signature: undefined __cdecl outputAggregate(bool param_1, AST_AggregateNode * param_2, AST_Traverser * param_3)


/* TIRDebugUtil::OutputTraverser::outputAggregate(bool, AST_AggregateNode*, AST_Traverser*) */

undefined8
TIRDebugUtil::OutputTraverser::outputAggregate
          (bool param_1,AST_AggregateNode *param_2,AST_Traverser *param_3)

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
  if (*(int *)(param_2 + 0x48) == 0) goto LAB_00c5b3d4;
  outputTreeText(pbVar3,(AST_Node *)param_2,*(int *)(param_3 + 0x48));
  FUN_00c5aa20(auStack_9c,100,"%p AGG ",param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  switch(*(undefined4 *)(param_2 + 0x48)) {
  case 1:
    goto LAB_00c5b3d4;
  case 2:
    goto LAB_00c5b3d4;
  case 3:
    goto LAB_00c5b1a0;
  case 4:
LAB_00c5b1a0:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar3);
    break;
  case 0x45:
    break;
  case 0x46:
    break;
  case 0x47:
    break;
  case 0x48:
    break;
  case 0x49:
    break;
  case 0x4a:
    break;
  case 0x4b:
    goto LAB_00c5b3d4;
  case 0x58:
    break;
  case 0x59:
    break;
  case 0x5a:
    break;
  case 0x5b:
    break;
  case 0x5c:
    break;
  case 0x5d:
    break;
  case 0x5e:
    break;
  case 0x5f:
    break;
  case 0x60:
    break;
  case 0x61:
    break;
  case 0x62:
    break;
  case 99:
    break;
  case 100:
    break;
  case 0x65:
    break;
  case 0x66:
    break;
  case 0x67:
    break;
  case 0x68:
    break;
  case 0x69:
    break;
  case 0x6a:
    break;
  case 0x6b:
    break;
  case 0x6c:
    break;
  case 0x6d:
    break;
  case 0x6e:
    break;
  case 0x6f:
    break;
  case 0x70:
    break;
  case 0x71:
    break;
  case 0x72:
    break;
  case 0x73:
    break;
  case 0x74:
    break;
  case 0x75:
    break;
  case 0x76:
    break;
  case 0x77:
    break;
  case 0x78:
    break;
  case 0x79:
    break;
  case 0x7a:
    break;
  case 0x7b:
    break;
  case 0x7c:
    break;
  case 0x7d:
    break;
  case 0x7e:
    break;
  case 0x7f:
    break;
  case 0x80:
    break;
  case 0x81:
    break;
  case 0x82:
    break;
  case 0x83:
    break;
  case 0x84:
    break;
  case 0x85:
    break;
  case 0x86:
    break;
  case 0x88:
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  if ((5 < *(uint *)(param_2 + 0x48)) ||
     ((1 << (ulong)(*(uint *)(param_2 + 0x48) & 0x1f) & 0x26U) == 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar3);
    SHC_Type::getUserString();
    pvVar2 = (void *)((ulong)local_b8 | 1);
    if ((local_b8[0] & 1) != 0) {
      pvVar2 = local_a8;
    }
                    /* try { // try from 00c5b39c to 00c5b3a3 has its CatchHandler @ 00c5b404 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar3,(ulong)pvVar2);
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar3);
  }
LAB_00c5b3d4:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


