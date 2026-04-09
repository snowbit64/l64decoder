// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00a59d08
// Size: 144 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NoteNode::clone() */

NoteNode * NoteNode::clone(void)

{
  uint uVar1;
  TransformGroup *in_x0;
  NoteNode *this;
  
  this = (NoteNode *)operator_new(0x1d0);
                    /* try { // try from 00a59d28 to 00a59d2f has its CatchHandler @ 00a59d98 */
  NoteNode(this,*(char **)(in_x0 + 8),1);
  TransformGroup::copyTransformGroupPropertiesFrom((TransformGroup *)this,in_x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x158));
  uVar1 = *(uint *)(in_x0 + 0x170);
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x1000;
  setColor(this,uVar1,1);
  *(undefined2 *)(this + 0x1cc) = *(undefined2 *)(in_x0 + 0x1cc);
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x1000;
  return this;
}


