// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RandomPool
// Entry Point: 00d1f704
// Size: 244 bytes
// Signature: undefined __thiscall RandomPool(RandomPool * this)


/* CryptoPP::RandomPool::RandomPool() */

void __thiscall CryptoPP::RandomPool::RandomPool(RandomPool *this)

{
  size_t __n;
  void *__s;
  undefined8 *puVar1;
  
  Algorithm::Algorithm((Algorithm *)this,true);
  this[0x21] = (RandomPool)0x1;
  *(undefined8 *)(this + 0x30) = 0x10;
  *(undefined8 *)(this + 0x28) = 0xffffffffffffffff;
  *(RandomPool **)(this + 0x38) = this + 8 + ((ulong)(uint)-(int)(this + 8) & 8);
  *(undefined8 *)(this + 0x78) = 0x20;
  *(undefined8 *)(this + 0x70) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__RandomPool_0100f6d0;
  this[0x69] = (RandomPool)0x1;
  *(RandomPool **)(this + 0x80) = this + 0x40 + ((ulong)(uint)-(int)(this + 0x40) & 8);
                    /* try { // try from 00d1f77c to 00d1f783 has its CatchHandler @ 00d1f808 */
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = &PTR__SimpleKeyingInterface_00fef588;
                    /* try { // try from 00d1f798 to 00d1f79f has its CatchHandler @ 00d1f7f8 */
  Algorithm::Algorithm((Algorithm *)(puVar1 + 1),true);
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  __n = *(size_t *)(this + 0x78);
  __s = *(void **)(this + 0x80);
  puVar1[4] = 0x3fffffffffffffff;
  puVar1[5] = 0;
  puVar1[8] = 0xffffffffffffffff;
  *(undefined8 **)(this + 0x88) = puVar1;
  *puVar1 = &PTR__Base_00feb820;
  puVar1[1] = &PTR__BlockCipherFinal_00feb8f0;
  this[0x90] = (RandomPool)0x0;
  memset(__s,0,__n);
  memset(*(void **)(this + 0x38),0,*(size_t *)(this + 0x30));
  return;
}


