// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00bff1a4
// Size: 412 bytes
// Signature: undefined __thiscall serialize(MarkovHuffmanTree * this, File * param_1, uint * param_2, uint * param_3)


/* MarkovHuffmanTree::serialize(File*, unsigned int&, unsigned int&) */

void __thiscall
MarkovHuffmanTree::serialize(MarkovHuffmanTree *this,File *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  uint local_64;
  uchar *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_2 = 0;
  *param_3 = 0;
  puVar3 = (uint *)(this + 0x18);
  local_60 = (uchar *)0x0;
  local_64 = 0;
  uVar2 = LZMACompressionUtil::compressIfSmaller
                    (*(uchar **)(this + 0x10),*puVar3,&local_60,&local_64);
  (**(code **)(*(long *)param_1 + 0x30))(param_1,puVar3,4);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,puVar3,4);
    (**(code **)(*(long *)param_1 + 0x30))
              (param_1,*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18));
  }
  else {
    puVar3 = &local_64;
    (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_64,4);
    (**(code **)(*(long *)param_1 + 0x30))(param_1,local_60,local_64);
    if (local_60 != (uchar *)0x0) {
      operator_delete__(local_60);
      puVar3 = &local_64;
    }
  }
  *param_3 = *puVar3 + 8;
  *param_2 = *(int *)(this + 0x18) + *param_2 + 8;
  (**(code **)(*(long *)param_1 + 0x30))(param_1,this + 8,4);
  (**(code **)(*(long *)param_1 + 0x30))(param_1,*(undefined8 *)this,*(int *)(this + 8) << 2);
  *param_3 = *param_3 + *(int *)(this + 8) * 4 + 4;
  *param_2 = *param_2 + *(int *)(this + 8) * 4 + 4;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


