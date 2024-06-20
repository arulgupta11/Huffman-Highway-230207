int isIso(node* root1, node* root2){
    if (!root1 && !root2) {
        return 1;
    }
    if (!root1 || !root2) {
        return 0;
    }
    if (root1->data != root2->data) {
        return 0;
    }
    return (isIso(root1->left, root2->left) && isIso(root1->right, root2->right))||(isIso(root1->left, root2->right) && isIso(root1->right, root2->left));
}
