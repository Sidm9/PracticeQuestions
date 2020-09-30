#include <iostream>
using namespace std;

struct _NODE_DATA_BST_
{
    int _KEY_VALUE_;
    struct _NODE_DATA_BST_ *_RIGHT_;
    struct _NODE_DATA_BST_ *_LEFT_;
};

class _BINARY_TREE_ADT_
{
public:
    _BINARY_TREE_ADT_();
    ~_BINARY_TREE_ADT_();

    void _INSERT_(int _KEY_);
    _NODE_DATA_BST_ *_SEARCH_(int _KEY_);
    void _DESTROY_TREE_();

private:
    void _DESTROY_TREE_(_NODE_DATA_BST_ *_LEAF_NODE_);
    void _INSERT_(int _KEY_, _NODE_DATA_BST_ *_LEAF_NODE_);

    _NODE_DATA_BST_ *_SEARCH_(int _KEY_, _NODE_DATA_BST_ *_LEAF_NODE_);

    _NODE_DATA_BST_ *_ROOT_NODE_;
};

_BINARY_TREE_ADT_::_BINARY_TREE_ADT_()
{
    _ROOT_NODE_ = nullptr;
}

_BINARY_TREE_ADT_::~_BINARY_TREE_ADT_()
{
    _DESTROY_TREE_();
}

void _BINARY_TREE_ADT_::_DESTROY_TREE_(_NODE_DATA_BST_ *_LEAF_NODE_)
{
    if (_LEAF_NODE_ != nullptr)
    {
        _DESTROY_TREE_(_LEAF_NODE_->_LEFT_);
        _DESTROY_TREE_(_LEAF_NODE_->_RIGHT_);
        delete _LEAF_NODE_;
    }
}
void _BINARY_TREE_ADT_::_INSERT_(int _KEY_, _NODE_DATA_BST_ *_LEAF_NODE_)
{
    if (_KEY_ < _LEAF_NODE_->_KEY_VALUE_)
    {
        if (_LEAF_NODE_->_LEFT_ != nullptr)
            _INSERT_(_KEY_, _LEAF_NODE_->_LEFT_);
        else
        {
            _LEAF_NODE_->_LEFT_ = new _NODE_DATA_BST_;
            _LEAF_NODE_->_LEFT_->_KEY_VALUE_ = _KEY_;
            _LEAF_NODE_->_LEFT_->_LEFT_ = nullptr;
            _LEAF_NODE_->_LEFT_->_RIGHT_ = nullptr;
        }
    }
    else if (_KEY_ >= _LEAF_NODE_->_KEY_VALUE_)
    {
        if (_LEAF_NODE_->_RIGHT_ != nullptr)
            _INSERT_(_KEY_, _LEAF_NODE_->_RIGHT_);
        else
        {
            _LEAF_NODE_->_RIGHT_ = new _NODE_DATA_BST_;
            _LEAF_NODE_->_RIGHT_->_KEY_VALUE_ = _KEY_;
            _LEAF_NODE_->_RIGHT_->_LEFT_ = nullptr;
            _LEAF_NODE_->_RIGHT_->_RIGHT_ = nullptr;
        }
    }
}

_NODE_DATA_BST_ *_BINARY_TREE_ADT_::_SEARCH_(int _KEY_, _NODE_DATA_BST_ *_LEAF_NODE_)
{
    if (_LEAF_NODE_ != nullptr)
    {
        if (_KEY_ == _LEAF_NODE_->_KEY_VALUE_)
            return _LEAF_NODE_;
        if (_KEY_ < _LEAF_NODE_->_KEY_VALUE_)
            return _SEARCH_(_KEY_, _LEAF_NODE_->_LEFT_);
        else
            return _SEARCH_(_KEY_, _LEAF_NODE_->_RIGHT_);
    }
    else
        return nullptr;
}
void _BINARY_TREE_ADT_::_INSERT_(int _KEY_)
{
    if (_ROOT_NODE_ != nullptr)
        _INSERT_(_KEY_, _ROOT_NODE_);

    else
    {
        _ROOT_NODE_ = new _NODE_DATA_BST_;
        _ROOT_NODE_->_KEY_VALUE_ = _KEY_;
        _ROOT_NODE_->_LEFT_ = nullptr;
        _ROOT_NODE_->_RIGHT_ = nullptr;
    }
}
_NODE_DATA_BST_ *_BINARY_TREE_ADT_::_SEARCH_(int _KEY_)
{
    return _SEARCH_(_KEY_, _ROOT_NODE_);
}

void _BINARY_TREE_ADT_::_DESTROY_TREE_()
{
    _DESTROY_TREE_(_ROOT_NODE_);
}
int main(int argc, char const *argv[])
{
    _BINARY_TREE_ADT_ a;
    a._INSERT_(1);
    cout << "OK";
    a._INSERT_(2);
    a._INSERT_(50);
    a._INSERT_(40);

    return 0;
}
