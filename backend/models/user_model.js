const db = require('../database');

const user = {
  getAll: function(callback) {
    return db.query('select * from user', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from user where iduser=?', [id], callback);
  },

  add: function(user, callback) {
    return db.query(
      'insert into user (firstName, lastName, address, phoneNumber) values(?,?,?,?)',
      [user.firstName,user.lastName,user.address,user.phoneNumber],
      callback
    );
  },

  delete: function(id, callback) {
    return db.query('delete from user where iduser=?', [id], callback);
  },

  update: function(id, user, callback) {
    return db.query(
      'update user set firstName=?, lastName=?, address=?, phoneNumber=?, where iduser=?',
      [user.firstName,user.lastName,user.address,user.phoneNumber, id],
      callback
    );
  }
};

module.exports = user;