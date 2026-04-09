// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 008e143c
// Size: 312 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSetGeometry::clone() */

IndexedTriangleSetGeometry * IndexedTriangleSetGeometry::clone(void)

{
  long lVar1;
  long in_x0;
  size_t __n;
  IndexedTriangleSet *pIVar2;
  IndexedTriangleSetGeometry *this;
  char *pcVar3;
  char *__dest;
  ulong uVar4;
  undefined8 local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar3 = *(char **)(in_x0 + 0x18);
  __n = strlen(pcVar3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_008e14cc;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar4);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,pcVar3,__n);
LAB_008e14cc:
  __dest[__n] = '\0';
                    /* try { // try from 008e14d0 to 008e14df has its CatchHandler @ 008e158c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_60);
                    /* try { // try from 008e14ec to 008e14ef has its CatchHandler @ 008e1588 */
  pIVar2 = (IndexedTriangleSet *)(**(code **)(**(long **)(in_x0 + 0x48) + 0x18))();
                    /* try { // try from 008e14f4 to 008e14fb has its CatchHandler @ 008e1584 */
  this = (IndexedTriangleSetGeometry *)operator_new(0x168);
  pcVar3 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar3 = local_50;
  }
                    /* try { // try from 008e1524 to 008e152b has its CatchHandler @ 008e1574 */
  IndexedTriangleSetGeometry
            (this,pcVar3,pIVar2,(Vector3 *)(*(long *)(in_x0 + 0x40) + 0xc),
             *(float *)(*(long *)(in_x0 + 0x40) + 0x18));
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


