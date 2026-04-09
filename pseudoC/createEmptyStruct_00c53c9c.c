// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createEmptyStruct
// Entry Point: 00c53c9c
// Size: 408 bytes
// Signature: undefined __thiscall createEmptyStruct(IR_TypeSet * this, char * param_1, IR_QualFlags param_2)


/* IR_TypeSet::createEmptyStruct(char const*, IR_QualFlags) */

undefined4 * __thiscall
IR_TypeSet::createEmptyStruct(IR_TypeSet *this,char *param_1,IR_QualFlags param_2)

{
  long lVar1;
  int iVar2;
  IR_Struct *this_00;
  undefined4 *puVar3;
  void *__dest;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte *__s1;
  ulong uVar8;
  void *__src;
  long lVar9;
  size_t __n;
  ulong uVar10;
  
  lVar9 = *(long *)(this + 0xda0);
  lVar1 = *(long *)(this + 0xda8) - lVar9;
  if (lVar1 != 0) {
    uVar10 = 0;
    do {
      pbVar4 = *(byte **)(*(long *)(lVar9 + uVar10 * 0x10) + 8);
      __s1 = *(byte **)(pbVar4 + 0x10);
      if ((*pbVar4 & 1) == 0) {
        __s1 = pbVar4 + 1;
      }
      iVar2 = strcmp((char *)__s1,param_1);
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar1 >> 4));
  }
  this_00 = (IR_Struct *)operator_new(0x70);
                    /* try { // try from 00c53d1c to 00c53d23 has its CatchHandler @ 00c53e34 */
  IR_Struct::IR_Struct(this_00,param_1,param_2);
  puVar3 = (undefined4 *)operator_new(0x20);
  puVar5 = *(undefined8 **)(this + 0xda8);
  puVar6 = *(undefined8 **)(this + 0xdb0);
  *(IR_Struct **)(puVar3 + 2) = this_00;
  *puVar3 = 3;
  if (puVar5 < puVar6) {
    *puVar5 = puVar3;
    *(undefined *)(puVar5 + 1) = 1;
    *(undefined8 **)(this + 0xda8) = puVar5 + 2;
  }
  else {
    __src = *(void **)(this + 0xda0);
    __n = (long)puVar5 - (long)__src;
    uVar10 = ((long)__n >> 4) + 1;
    if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = (long)puVar6 - (long)__src;
    uVar8 = (long)uVar7 >> 3;
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar10 = 0xfffffffffffffff;
    }
    if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar10 * 0x10);
    puVar5 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
    *puVar5 = puVar3;
    *(undefined *)(puVar5 + 1) = 1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xda0) = __dest;
    *(undefined8 **)(this + 0xda8) = puVar5 + 2;
    *(void **)(this + 0xdb0) = (void *)((long)__dest + uVar10 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  return puVar3;
}


