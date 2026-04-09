// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
// Entry Point: 00c009cc
// Size: 304 bytes
// Signature: uint __cdecl __sort4<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>(HEntry * param_1, HEntry * param_2, HEntry * param_3, HEntry * param_4, __less * param_5)


/* unsigned int std::__ndk1::__sort4<std::__ndk1::__less<MarkovHuffmanTree::HEntry,
   MarkovHuffmanTree::HEntry>&, MarkovHuffmanTree::HEntry*>(MarkovHuffmanTree::HEntry*,
   MarkovHuffmanTree::HEntry*, MarkovHuffmanTree::HEntry*, MarkovHuffmanTree::HEntry*,
   std::__ndk1::__less<MarkovHuffmanTree::HEntry, MarkovHuffmanTree::HEntry>&) */

uint std::__ndk1::
     __sort4<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
               (HEntry *param_1,HEntry *param_2,HEntry *param_3,HEntry *param_4,__less *param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)param_2;
  uVar3 = *(uint *)param_3;
  if (uVar1 < *(uint *)param_1) {
    uVar2 = *(ulong *)param_1;
    if (uVar3 < uVar1) {
      uVar1 = 1;
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(ulong *)param_2 = uVar2;
      uVar3 = *(uint *)param_3;
      if ((uint)uVar2 <= uVar3) {
        uVar1 = 1;
        goto LAB_00c00a80;
      }
      uVar1 = 2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
    }
    *(ulong *)param_3 = uVar2;
  }
  else {
    if (uVar3 < uVar1) {
      uVar2 = *(ulong *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(ulong *)param_3 = uVar2;
      if (*(uint *)param_2 < *(uint *)param_1) {
        uVar4 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        uVar1 = 2;
        *(undefined8 *)param_2 = uVar4;
        uVar2 = (ulong)*(uint *)param_3;
      }
      else {
        uVar1 = 1;
      }
      goto LAB_00c00a84;
    }
    uVar1 = 0;
LAB_00c00a80:
    uVar2 = (ulong)uVar3;
  }
LAB_00c00a84:
  if (*(uint *)param_4 < (uint)uVar2) {
    uVar4 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = uVar4;
    if (*(uint *)param_2 <= *(uint *)param_3) {
      return uVar1 + 1;
    }
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar4;
    if (*(uint *)param_1 <= *(uint *)param_2) {
      return uVar1 + 2;
    }
    uVar1 = uVar1 + 3;
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar4;
  }
  return uVar1;
}


