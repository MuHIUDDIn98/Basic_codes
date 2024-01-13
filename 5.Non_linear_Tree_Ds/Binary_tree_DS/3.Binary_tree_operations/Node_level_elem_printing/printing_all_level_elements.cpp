#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int value) {
        this->value = value;
        this->right = NULL;
        this->left = NULL;
    }
};

Node* input_tree() {
    int val;
    Node* root;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node*> p_q;
    if (root)
        p_q.push(root);

    while (!p_q.empty()) {
        Node* p = p_q.front();
        p_q.pop();

        int L, R;
        cin >> L >> R;
        Node* myleft, * myright;
        if (L == -1)
            myleft = NULL;
        else
            myleft = new Node(L);

        if (R == -1)
            myright = NULL;
        else
            myright = new Node(R);

        p->left = myleft;
        p->right = myright;

        if (p->left) {
            p_q.push(p->left);
        }
        if (p->right) {
            p_q.push(p->right);
        }
    }

    return root;
}

void find_level_elems(Node* root, int searchedLevel) {
    queue<pair<Node*, int>> q;
    q.push({ root, 0 });

    while (!q.empty()) {
        pair<Node*, int> pr = q.front();
        Node* node = pr.first;
        int level = pr.second;
        q.pop();

        if (level == searchedLevel) {
            cout << node->value << " ";
        }

        if (node->left) {
            q.push({ node->left, level + 1 });
        }
        if (node->right) {
            q.push({ node->right, level + 1 });
        }
    }
}

int find_level(Node* root) {
    queue<pair<Node*, int>> q;
    q.push({ root, 0 });
    int level = 0;

    while (!q.empty()) {
        pair<Node*, int> pr = q.front();
        Node* node = pr.first;
        int currentLevel = pr.second;
        q.pop();

        if (node->left) {
            q.push({ node->left, currentLevel + 1 });
        }
        if (node->right) {
            q.push({ node->right, currentLevel + 1 });
        }

        level = max(level, currentLevel);
    }

    return level;
}

int main() {
    Node* root = input_tree();
    int level;
    cin >> level;

    int maxLevel = find_level(root);

    if (level >= 0 && level <= maxLevel) {
        find_level_elems(root, level);
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
