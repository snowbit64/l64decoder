// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008ae438
// Size: 2860 bytes
// Signature: undefined print(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisBinaryUtil::GLSHeader::print() const */

void LoopSynthesisBinaryUtil::GLSHeader::print(void)

{
  long lVar1;
  void *pvVar2;
  uint *in_x0;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::to_string(*in_x0);
                    /* try { // try from 008ae46c to 008ae47f has its CatchHandler @ 008af0d4 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)&local_70,(char *)0x0);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008ae498 to 008ae4a7 has its CatchHandler @ 008af0bc */
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_50);
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  in_x8[2] = puVar4[2];
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (((byte)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
                    /* try { // try from 008ae4e4 to 008ae4eb has its CatchHandler @ 008af0a0 */
  std::__ndk1::to_string(in_x0[1]);
                    /* try { // try from 008ae4ec to 008ae4ff has its CatchHandler @ 008af090 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008ae518 to 008ae527 has its CatchHandler @ 008af060 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008ae560 to 008ae567 has its CatchHandler @ 008af024 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008ae58c to 008ae593 has its CatchHandler @ 008af020 */
  std::__ndk1::to_string(in_x0[2]);
                    /* try { // try from 008ae594 to 008ae5a7 has its CatchHandler @ 008af01c */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008ae5c0 to 008ae5cf has its CatchHandler @ 008af018 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008ae608 to 008ae60f has its CatchHandler @ 008af014 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008ae634 to 008ae63b has its CatchHandler @ 008af010 */
  std::__ndk1::to_string(in_x0[3]);
                    /* try { // try from 008ae63c to 008ae64f has its CatchHandler @ 008af00c */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008ae668 to 008ae677 has its CatchHandler @ 008af008 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008ae6b0 to 008ae6b7 has its CatchHandler @ 008af004 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008ae6dc to 008ae6e3 has its CatchHandler @ 008af000 */
  std::__ndk1::to_string(in_x0[4]);
                    /* try { // try from 008ae6e4 to 008ae6f7 has its CatchHandler @ 008aeffc */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008ae710 to 008ae71f has its CatchHandler @ 008aeff8 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008ae758 to 008ae75f has its CatchHandler @ 008aeff4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008ae784 to 008ae78b has its CatchHandler @ 008aeff0 */
  std::__ndk1::to_string(in_x0[5]);
                    /* try { // try from 008ae78c to 008ae79f has its CatchHandler @ 008aefec */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008ae7b8 to 008ae7c7 has its CatchHandler @ 008aefe8 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008ae800 to 008ae807 has its CatchHandler @ 008aefe4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008ae82c to 008ae833 has its CatchHandler @ 008aefe0 */
  std::__ndk1::to_string(in_x0[6]);
                    /* try { // try from 008ae834 to 008ae847 has its CatchHandler @ 008aefdc */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008ae860 to 008ae86f has its CatchHandler @ 008aefd8 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008ae8a8 to 008ae8af has its CatchHandler @ 008aefd4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008ae8d4 to 008ae8db has its CatchHandler @ 008aefd0 */
  std::__ndk1::to_string(in_x0[7]);
                    /* try { // try from 008ae8dc to 008ae8ef has its CatchHandler @ 008aefcc */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008ae908 to 008ae917 has its CatchHandler @ 008aefc8 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008ae950 to 008ae957 has its CatchHandler @ 008aefc4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008ae97c to 008ae983 has its CatchHandler @ 008aefc0 */
  std::__ndk1::to_string(in_x0[8]);
                    /* try { // try from 008ae984 to 008ae997 has its CatchHandler @ 008aefbc */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008ae9b0 to 008ae9bf has its CatchHandler @ 008aefb8 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008ae9f8 to 008ae9ff has its CatchHandler @ 008aefb4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008aea24 to 008aea2b has its CatchHandler @ 008aefb0 */
  std::__ndk1::to_string(in_x0[9]);
                    /* try { // try from 008aea2c to 008aea3f has its CatchHandler @ 008aefac */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008aea58 to 008aea67 has its CatchHandler @ 008aefa8 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008aeaa0 to 008aeaa7 has its CatchHandler @ 008aefa4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008aeacc to 008aead3 has its CatchHandler @ 008aefa0 */
  std::__ndk1::to_string(in_x0[10]);
                    /* try { // try from 008aead4 to 008aeae7 has its CatchHandler @ 008aef9c */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008aeb00 to 008aeb0f has its CatchHandler @ 008aef98 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008aeb48 to 008aeb4f has its CatchHandler @ 008aef94 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008aeb74 to 008aeb7b has its CatchHandler @ 008aef90 */
  std::__ndk1::to_string(in_x0[0xb]);
                    /* try { // try from 008aeb7c to 008aeb8f has its CatchHandler @ 008aef8c */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008aeba8 to 008aebb7 has its CatchHandler @ 008aef88 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008aebf0 to 008aebf7 has its CatchHandler @ 008aef84 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008aec1c to 008aec23 has its CatchHandler @ 008aef80 */
  std::__ndk1::to_string(in_x0[0xc]);
                    /* try { // try from 008aec24 to 008aec37 has its CatchHandler @ 008aef7c */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008aec50 to 008aec5f has its CatchHandler @ 008aef78 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008aec98 to 008aec9f has its CatchHandler @ 008aef74 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 008aecc4 to 008aeccb has its CatchHandler @ 008aef70 */
  std::__ndk1::to_string(in_x0[0xd]);
                    /* try { // try from 008aeccc to 008aecdf has its CatchHandler @ 008aef6c */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_88,(char *)0x0);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 008aecf8 to 008aed07 has its CatchHandler @ 008aef68 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_70);
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 008aed40 to 008aed47 has its CatchHandler @ 008aef64 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,(ulong)pvVar2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


